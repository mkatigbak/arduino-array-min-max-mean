// Author: Mark Katigbak
// Write a function that takes an array and returns min, max, and mean.

void minMaxMean (int arr[], int size, int &minValue, int &maxValue, double &mean);

void setup() {
  Serial.begin(9600);
  Serial.println();

  Serial.print("Enter the size of the array: ");
  while(!Serial.available()) {}
  int size = Serial.parseInt();
  Serial.println(size);

  int arr[size + 1];

  Serial.print("Enter the elements of the array separated by spaces: ");
  for(int i = 0; i <= size; i++) {
    while(!Serial.available()) {}
    arr[i] = Serial.parseInt();
    Serial.print(arr[i]);
    Serial.print(' ');
  }

  int minValue = arr[1];
  int maxValue = arr[0];
  double mean = 0;

  Serial.println();

  minMaxMean(arr, size, minValue, maxValue, mean);

  Serial.print("Minimum Value: ");
  Serial.println(minValue);
  Serial.print("Maximum Value: ");
  Serial.println(maxValue);
  Serial.print("Mean: ");
  Serial.println(mean);
}

void loop() {

}

void minMaxMean (int arr[], int size, int &minValue, int &maxValue, double &mean) {
  for(int i = 0; i <= size; i++) {
    if(arr[i + 1] < minValue) {
      minValue = arr[i];
    }
    if(arr[i] > maxValue) {
      maxValue = arr[i];
    }
    mean += arr[i];
  }

  mean /= size;
}
