class ParkingSystem {
private:
  int max[3];
  int current[3];

public:
  ParkingSystem(int big, int medium, int small) {
    max[0] = big;
    max[1] = medium;
    max[2] = small;
    for (int i = 0; i < 3; i++) {
      current[i] = 0;
    }
  }

  bool addCar(int carType) {
    if (current[carType - 1] < max[carType - 1]) {
      current[carType - 1]++;
      return true;
    }
    return false;
  }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
