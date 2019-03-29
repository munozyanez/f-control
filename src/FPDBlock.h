#ifndef FPDBLOCK_H
#define FPDBLOCK_H
#include "fcontrol.h"

class FPDBlock : public BaseBlock
{
public:
    FPDBlock();
    FPDBlock(double new_kp, double new_kd, double new_fex, double new_dts);

    double OutputUpdate(double new_input);

    double getState() const;

private:
    double kp, kd, fex;
    double dts;

    double state, input;
    FractionalController1DOF s_e;
};

#endif // FPDBLOCK_H
