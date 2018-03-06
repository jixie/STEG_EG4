      integer AsymChoiceKpa, SFchoiceKpa
      REAL*8 changeA1,factorRA 

c        changeA1=0.1
!     7/30/13: this file used to control changes in A1 etc w.r.t. 
!         the standard simulation (to extract g1 etc)
!     Therefore, for standard simulation, set all changes equal to 0. E.g., changeA1 = 0.0
!         I plan to include & use it in G1G2new(X,Q2,TH,TARG,G1,G2,A1,A2) (in newSFsSEK.f)
!         & may use it in other routines as well in future such as to change AsymChoice & SF_Choice etc.

!      Gave me great compilation trouble when the assignment was not in 'parameter' form or
!          when I didn't leave at least 7 blank spaces before each of the above two lines.

*******************************************************************************
*     
*     kpa: 7/30/13: added kpaVarChanges.inc to control the change of A1 by 
*     a known amount such as 0.1. This same file is used in set_things_up.f to control 
*     the values of AsymChoice & SFchoice (which used be obtained from rcslacpol.file
*     in previous versions with each taking 11 for standard simulations), but our
*     final g1 extraction & systematic error estimations, we want to repeat the 
*     simulations by varying A1 to A1+0.1, AsymChoice from 11 to 12 & 15 and SFchoice 
*     from 11 to 12 & 13 (meaning 6 separate simulations - only one thing changed, not 
*     one change on top of another)
*
*
*     kpa: 8/6/13: added factorRA to multiply RA by 1.2 (or change it by 20% for systematics)
******************************************************************************
      parameter(changeA1=0.0)            !kp: std Case
!      parameter(changeA1=0.1)

      parameter(AsymChoiceKpa=11)        !kp: std Case
!      parameter(AsymChoiceKpa=12)
!      parameter(AsymChoiceKpa=15)

      parameter(SFchoiceKpa=11)          !kp: std Case
!      parameter(SFchoiceKpa=12)
!      parameter(SFchoiceKpa=13)

      parameter(factorRA=1.0)           !kp: std Case
!      parameter(factorRA=1.2)          !kp: irrelevant in srucFunc.f program (only in simulation with STEG_RCSLACPOL)