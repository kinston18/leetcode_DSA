

/*


Example 1:

Input: celsius = 36.50
Output: [309.65000,97.70000]
Explanation: Temperature at 36.50 Celsius converted in Kelvin is 309.65 and converted in Fahrenheit is 97.70.

*/


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>output;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        
        output.push_back(kelvin);
        output.push_back(fahrenheit);
        return output;
    }
};
