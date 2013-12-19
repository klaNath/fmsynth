//This software is released under the MIT License, see LICENSE.txt.

/* 
 * File:   fmsynth.h
 * Author: Kazusa Okuda
 *
 * Created on 2013/11/17, 22:58
 */

#ifndef FMSYNTH_H
#define	FMSYNTH_H

//Structure "fmreg" is synthesize phonic context
//  phnum is number of synthesize phonic (IF SET "0", CONTEXT IS NOT VALID)
//  opX is phase Register
//  opXout is output each operators
//  modX is input Modulator
//  carryX is coefficient of output
//  env{A,D,S,R} is Envelope controll numbers
//  envGen is Envelope Generater status register
//  carrier is conteiner of output date(is raw data)
//  fmstatus is flags of fm synthesizer
//  freq is operation frequency

#define NOTE2FREQ( a ) note2freq[a]

typedef struct  fmreg
{
    unsigned int    op0;
    unsigned int    op1;
    unsigned int    op2;
    unsigned int    op3;
    int             op0out;
    int             op1out;
    int             op2out;
    int             op3out;
    int             mod0;
    int             mod1;
    int             mod2;
    int             mod3;
    unsigned short  freqmul1;
    unsigned short  freqmul2;
    unsigned short  freqmul3;
    unsigned short  freqmul4;
    unsigned short  carry0;
    unsigned short  carry1;
    unsigned short  carry2;
    unsigned short  carry3;
    unsigned short  env1A;
    unsigned short  env1D;
    unsigned short  env1S;
    unsigned short  env1R;
    unsigned short  env2D;
    unsigned short  env2Sl;
    unsigned short  env2St;
    unsigned short  env2R;
    int             carrier;
    int             env1Gen;
    int             env2Gen;
    unsigned short  fmstatus;
    int  freq;
};

int     fmstep (*fmreg);

const   int     note2freq[72] ;

#endif



