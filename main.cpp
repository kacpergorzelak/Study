#include <iostream>
#include <vector>
#include <time.h>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

// function to initialize vector values (default are zeros)
vector<double> initialize_vector(vector<double> vec1){
    for(int i = 0; i < vec1.size(); i++){
        vec1[i] = rand()%10;   
    }
    for(int i : vec1){
        cout << i << " ";
    }
    cout << endl;
    return vec1;
}

// function that calculates scalar product out of two vectors
double scalar_product(vector<double> v1, vector<double> v2){
    srand(time(NULL));
    double result{};
    cout << "v1 = ";
    v1 = initialize_vector(v1);
    cout << "v2 = ";
    v2 = initialize_vector(v2);
    cout << endl;
    for(int i = 0; i < v1.size(); i++){
        result += v1[i]*v2[i];
    }
    cout<< endl << "Scalar product is equal: " << result << endl;
    return result;
}

// function that calculates outer product out of two vectors
vector<vector<double>> outer_product(vector<double> v1, vector<double> v2){
    vector<vector<double>> matrix(v1.size(), vector<double>(v1.size(), 0));
    srand(time(NULL));
    cout << "v1 = ";
    v1 = initialize_vector(v1);
    cout << "v2 = ";
    v2 = initialize_vector(v2);
    cout << endl;
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            matrix[i][j] = v1[i] * v2[j];
        }
    }
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            cout << matrix[i][j] << " ";
            if(j == v1.size() - 1){
                cout << endl;
            }
        }
    }
    return matrix;
}

int main(){
    int n{};
    n = 3;
    vector<double> v1(n, 0);
    vector<double> v2(n, 0);
    scalar_product(v1, v2);
    outer_product(v1, v2);
    return 0;
}