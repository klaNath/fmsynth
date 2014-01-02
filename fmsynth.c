#include "fmsynth.h"

int fmstep(fmreg* f){

    switch(f->fmstatus)
            case(FMSYNTH_STOP)         : return -1;
            case(FMSYNTH_ON)             :f->fmstatus = FMSYNTH_ON_ATK;
            case(FMSYNTH_ON_ATK)    





};