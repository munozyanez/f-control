#ifndef TIMESIGNAL_H
#define TIMESIGNAL_H

#include <vector>

class TimeSignal
{
public:
    TimeSignal();
    TimeSignal(double init_fs, unsigned int init_size);

    bool Initialize(unsigned int new_size, double new_fs);
    bool GetParams(unsigned int &out_size, double &out_fs) const;

    //variables exposed
    //data must be exposed for better performance.
    //Think of this class as an improved std::vector.
    std::vector<double> data;

    double getFs() const;

    double getSize() const;


private:
    double fs;//frequency of sampling
    double dts;//time of sampling
    unsigned int N;//number of data

};

#endif // TIMESIGNAL_H