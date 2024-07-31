#include <iostream>
 
// Define the neural network parameters
const float weight = 0.5;  // Example weight
const float bias = 1.0;    // Example bias
 
// Function to perform the neural network operation
float neuralNetworkInference(float input) {
    return weight * input + bias;
}
 
int main() {
    float input = 3.0;  // Example input
    float output = neuralNetworkInference(input);
    
    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;
    
    return 0;
}
