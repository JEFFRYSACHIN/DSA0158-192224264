#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class NeuralNetwork {
private:
    vector<vector<double>> weights1, weights2;
    vector<double> biases1, biases2;
    double learning_rate;
    
    // Activation function and its derivative
    double sigmoid(double x) {
        return 1 / (1 + exp(-x));
    }

    double sigmoid_derivative(double x) {
        return x * (1 - x);
    }

public:
    NeuralNetwork(int input_size, int hidden_size, int output_size, double lr) {
        learning_rate = lr;
        srand(time(0));

        // Initialize weights and biases with random values
        weights1.resize(hidden_size, vector<double>(input_size));
        for(auto &row : weights1)
            for(auto &w : row)
                w = ((double) rand() / (RAND_MAX));
        
        weights2.resize(output_size, vector<double>(hidden_size));
        for(auto &row : weights2)
            for(auto &w : row)
                w = ((double) rand() / (RAND_MAX));
        
        biases1.resize(hidden_size, ((double) rand() / (RAND_MAX)));
        biases2.resize(output_size, ((double) rand() / (RAND_MAX)));
    }

    // Forward propagation
    vector<double> forward(vector<double> input) {
        vector<double> hidden_layer, output_layer;

        // Input to hidden layer
        for(int i = 0; i < weights1.size(); i++) {
            double sum = 0;
            for(int j = 0; j < input.size(); j++) {
                sum += input[j] * weights1[i][j];
            }
            sum += biases1[i];
            hidden_layer.push_back(sigmoid(sum));
        }

        // Hidden to output layer
        for(int i = 0; i < weights2.size(); i++) {
            double sum = 0;
            for(int j = 0; j < hidden_layer.size(); j++) {
                sum += hidden_layer[j] * weights2[i][j];
            }
            sum += biases2[i];
            output_layer.push_back(sigmoid(sum));
        }

        return output_layer;
    }

    // Backward propagation
    void backward(vector<double> input, vector<double> target) {
        // Forward pass
        vector<double> hidden_layer, output_layer;
        for(int i = 0; i < weights1.size(); i++) {
            double sum = 0;
            for(int j = 0; j < input.size(); j++) {
                sum += input[j] * weights1[i][j];
            }
            sum += biases1[i];
            hidden_layer.push_back(sigmoid(sum));
        }

        for(int i = 0; i < weights2.size(); i++) {
            double sum = 0;
            for(int j = 0; j < hidden_layer.size(); j++) {
                sum += hidden_layer[j] * weights2[i][j];
            }
            sum += biases2[i];
            output_layer.push_back(sigmoid(sum));
        }

        // Calculate output layer error
        vector<double> output_error(output_layer.size());
        for(int i = 0; i < output_error.size(); i++) {
            output_error[i] = target[i] - output_layer[i];
        }

        // Calculate hidden layer error
        vector<double> hidden_error(hidden_layer.size());
        for(int i = 0; i < hidden_error.size(); i++) {
            double error = 0;
            for(int j = 0; j < output_error.size(); j++) {
                error += output_error[j] * weights2[j][i];
            }
            hidden_error[i] = error * sigmoid_derivative(hidden_layer[i]);
        }

        // Update weights and biases for hidden to output layer
        for(int i = 0; i < weights2.size(); i++) {
            for(int j = 0; j < weights2[0].size(); j++) {
                weights2[i][j] += learning_rate * output_error[i] * hidden_layer[j];
            }
            biases2[i] += learning_rate * output_error[i];
        }

        // Update weights and biases for input to hidden layer
        for(int i = 0; i < weights1.size(); i++) {
            for(int j = 0; j < weights1[0].size(); j++) {
                weights1[i][j] += learning_rate * hidden_error[i] * input[j];
            }
            biases1[i] += learning_rate * hidden_error[i];
        }
    }
};

int main() {
    NeuralNetwork nn(2, 2, 1, 0.1);
    vector<vector<double>> inputs = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    vector<vector<double>> targets = {{0}, {1}, {1}, {0}};

    for(int epoch = 0; epoch < 10000; epoch++) {
        for(int i = 0; i < inputs.size(); i++) {
            nn.backward(inputs[i], targets[i]);
        }
    }

    for(int i = 0; i < inputs.size(); i++) {
        vector<double> output = nn.forward(inputs[i]);
        cout << "Input: " << inputs[i][0] << " " << inputs[i][1] << " Output: " << output[0] << endl;
    }

    return 0;
}
