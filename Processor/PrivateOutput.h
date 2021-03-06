/*
 * PrivateOutput.h
 *
 */

#ifndef PROCESSOR_PRIVATEOUTPUT_H_
#define PROCESSOR_PRIVATEOUTPUT_H_

#include <deque>
using namespace std;

#include "Math/Share.h"

template<class T>
class PrivateOutput
{
    SubProcessor<Share<T>>& proc;
    deque<T> masks;

public:
    PrivateOutput(SubProcessor<Share<T>>& proc) : proc(proc) { };

    void start(int player, int target, int source);
    void stop(int player, int source);
};

#endif /* PROCESSOR_PRIVATEOUTPUT_H_ */
