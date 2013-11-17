/* 
 * File:   fmsynth.h
 * Author: kazusa
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

typedef struct  fmreg
{
    char            phnum;
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
    unsigned short  carry0;
    unsigned short  carry1;
    unsigned short  carry2;
    unsigned short  carry3;
    unsigned short  envA;
    unsigned short  envD;
    unsigned short  envS;
    unsigned short  envR;
    int             carrier;
    unsigned short  envGen;
    unsigned short  fmstatus;
    unsigned short  freq;
};

int fminit (fmreg *contxt);
int fmstat (void);
int fmstart (fmreg *contxt);
int fmstep (fmreg *contxt);
int fmstop (fmreg *contxt);

unsigned int castfm(int);


#endif



