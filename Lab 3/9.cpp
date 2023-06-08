#include<bits/stdc++.h>
using namespace std;

vector<double> GaussElimination(vector<vector<double>> &matrix, int n){
	double mul;
	vector<double> x(n);

	for(int i = 1; i < n; i++){
		mul = (matrix[i][0] * (-1)) / matrix[0][0];

		for(int j = 0; j <= n; j++){
			matrix[i][j] += matrix[0][j] * mul;
		}
	}

	for(int i = 2; i < n; i++){
		mul = (matrix[i][1] * (-1)) / matrix[1][1];

		for(int j = 0; j <= n; j++){
			matrix[i][j] += matrix[1][j] * mul;
		}
	}

	x[2] = matrix[2][3] / matrix[2][2];
	x[1] = (matrix[1][3] - matrix[1][2] * x[2]) / matrix[1][1];
	x[0] = (matrix[0][3] - (matrix[0][2] * x[2]) - (matrix[0][1] * x[1])) / matrix[0][0];

	return x;
}

int main(){
    int n; cin >> n;
    
    vector<vector<double>> matrix(n, vector<double> (n + 1));
    vector<double> x(n);

    for(int i = 0; i < n; i++){
    	for(int j = 0; j <= n; j++){
    		cin >> matrix[i][j];
    	}
    }

    x = GaussElimination(matrix, n);

    cout << "Unique solution: ";

	for(int i = 0; i < n; i++){
		if(x[i] > -0.0005 and x[i] < 0.0005)
			x[i] = 0;

		cout << fixed << setprecision(3) << x[i] << " ";
	}

    return 0;
}