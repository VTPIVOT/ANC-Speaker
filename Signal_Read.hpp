#include <vector>

using namespace std;

struct Wave{
    double Hz;
    double amp;
};

void addFreqData(vector<double> data, double value);

Wave waveInit(vector<double> freqData);

vector<double> findExtremes(vector<double> freqData);

