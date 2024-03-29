// Main function
int main() {
    // Create a Reader object with the filename "Salary_Data.csv"
    Reader reader("Salary_Data.csv");
    // Vectors to store input features (X) and output labels (Y)
    vector<float> X, Y;
    // Read data from the CSV file
    reader.read(X, Y);
    // Create a Regression object with the number of data points minus 10
    Regression regression(X.size() - 10);
    // Train the model using the LMS algorithm
    regression.LMS(X, Y);
    // Make predictions using the trained model for some sample values
    cout << regression.predict(1.1) << endl;
    cout << regression.predict(1.3) << endl;
    cout << regression.predict(2.0) << endl;
    cout << regression.predict(2.2) << endl;
    cout << regression.predict(2.9) << endl;
    cout << regression.predict(3.0) << endl;
    return 0;
}
