//--------------------Description----------
// Every email consists of a local name and a domain name, separated by the @
// sign.

// For example, in alice@leetcode.com, alice is the local name, and leetcode.com
// is the domain name.

// Besides lowercase letters, these emails may contain '.'s or '+'s.

// If you add periods ('.') between some characters in the local name part of an
// email address, mail sent there will be forwarded to the same address without
// dots in the local name.  For example, "alice.z@leetcode.com" and
// "alicez@leetcode.com" forward to the same email address.  (Note that this
// rule does not apply for domain names.)

// If you add a plus ('+') in the local name, everything after the first plus
// sign will be ignored. This allows certain emails to be filtered, for example
// m.y+name@email.com will be forwarded to my@email.com.  (Again, this rule does
// not apply for domain names.)

// It is possible to use both of these rules at the same time.

// Given a list of emails, we send one email to each address in the list.  How
// many different addresses actually receive mails?
//--------------------Results--------------
// Runtime: 48 ms, faster than 83.01% of C++ online submissions for Unique Email
// Addresses. Memory Usage: 14.2 MB, less than 63.33% of C++ online submissions
// for Unique Email Addresses.
#include <set>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int numUniqueEmails(vector<string> &emails) {
    set<string> s;

    for (int i = 0; i < emails.size(); i++) {
      string tmps = "";
      int start = 0, end = 0;

      while (end < emails[i].length()) {
        if (emails[i][end] == '.') {
          tmps.append(emails[i].substr(start, end - start));
          start = end + 1;
          end = start + 1;
        } else if (emails[i][end] == '+') {
          tmps.append(emails[i].substr(start, end - start));
          while (emails[i][end] != '@') {
            end++;
          }
          tmps.append(emails[i].substr(end, emails[i].length() - end));
          break;
        } else if (emails[i][end] == '@') {
          tmps.append(emails[i].substr(start, end - start));
          tmps.append(emails[i].substr(end, emails[i].length() - end));
          break;
        } else {
          end++;
        }
      }
      s.insert(tmps);
    }
    return s.size();
  }
};
