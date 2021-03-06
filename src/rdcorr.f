      Subroutine rdcorr(w2,q2,drd)

      Implicit none

      real*8 drd,w2,q2,a(15),x,t

      a(1) = 3.95782e-01
      a(2) = 8.78634e-01
      a(3) = 1.44187e-01
      a(4) = 2.11798e-01
      a(5) = 1.66622e+00
      a(6) = 3.34587e-01
      a(7) = 2.00212e-01
      a(8) = 2.16980e+00
      a(9) = -6.63565e-01
      a(10) = 2.09388e-01
      a(11) = 2.95009e+00
      a(12) = 6.68717e-01 
      a(13) = 3.74751e-01
      a(14) = -3.20000e+00 
      a(15) = -3.20000e+00 

      x = w2
      drd = -0.37 + a(1)*exp(-0.5*((x-a(2))/a(3))**2) + 
     & a(4)*exp(-0.5*((x-a(5))/a(6))**2) + 
     & a(7)*exp(-0.5*((x-a(8))/a(9))**2) + 
     & a(10)*exp(-0.5*((x-a(11))/a(12))**2)+
     & a(13)/(1.+exp(a(14)*(x+a(15))))

      return
      end
