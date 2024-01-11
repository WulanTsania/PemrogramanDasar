#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
// Fungsi untuk menghitung mean dari vector
double calculateMean(const std::vector<int>& data) {
    int sum = 0;
    for (int value : data) {
        sum += value;
    }
    return static_cast<double>(sum) / data.size();
}
// Fungsi untuk menghitung median dari vector
double calculateMedian(const std::vector<int>& data) {
    std::vector<int> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    size_t size = sortedData.size();
    if (size % 2 == 0) {
        // Jika jumlah data genap, ambil rata-rata dari dua nilai tengah
        return (sortedData[size / 2 - 1] + sortedData[size / 2]) / 2.0;
    }
    else {
        // Jika jumlah data ganjil, ambil nilai tengah
        return sortedData[size / 2];
    }
}
// Fungsi untuk menghitung standard deviasi dari vector
double calculateStandardDeviation(const std::vector<int>& data, double mean) {
    double sumSquaredDifference = 0;
    for (int value : data) {
        sumSquaredDifference += std::pow(value - mean, 2);
    }
    return std::sqrt(sumSquaredDifference / data.size());
}

int main() {
    std::vector<int> nilaiTabel = { 92, 65, 74, 80, 80, 70, 78 };

    // Menghitung mean
    double mean = calculateMean(nilaiTabel);
    // Menghitung median
    double median = calculateMedian(nilaiTabel);
    // Menghitung standard deviasi
    double standardDeviation = calculateStandardDeviation(nilaiTabel, mean);
    // Menampilkan hasil
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;

    return 0;
}