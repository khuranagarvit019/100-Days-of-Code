import math
#Initialising Values
xa = 1
xb = 0
xc = 1
Wad = 0.2
Wae = -0.3
Wbd = 0.4
Wbe = 0.1
Wcd = -0.5
Wce = 0.2
Wdf = -0.3
Wef = -0.2
thetaD = -0.4
thetaE = 0.2
thetaF = 0.1


#Net Input & Output Calculation
Id = (Wad*xa) + (Wbd*xb) + (Wcd*xc) + thetaD
Ie = (Wae*xa) + (Wbe*xb) + (Wce*xc) + thetaE 
Od = 1/(1 + math.exp(-Id))
Oe = 1/(1 + math.exp(-Ie))
If = (Wdf*Od) + (Wef*Oe) + thetaF
Of = 1/(1 + math.exp(-If))

#Error calculation
ErrF = Of*(1 - Of)*(1 - Of)
ErrE = Oe*(1 - Oe)*ErrF*(Wef)
ErrD = Od*(1 - Od)*ErrF*(Wdf)

#New weight calculation
Wdf = Wdf + 0.9*(ErrF)*(Od)
Wef = Wef + 0.9*(ErrF)*(Oe)
Wad = Wad + 0.9*(ErrD)*(xa)
Wae = Wae + 0.9*(ErrE)*(xa)
Wbd = Wbd + 0.9*(ErrD)*(xb)
Wbe = Wbe + 0.9*(ErrE)*(xb)
Wcd = Wcd + 0.9*(ErrD)*(xc)
Wce = Wce + 0.9*(ErrE)*(xc)
#New Bias Calculation
thetaF = thetaF + 0.9*ErrF
thetaE = thetaE + 0.9*ErrE
thetaD = thetaD + 0.9*ErrD

print(Wdf) 
print(Wef) 
print(Wad) 
print(Wae) 
print(Wbd) 
print(Wbe) 
print(Wcd) 
print(Wce) 
print(thetaF)  
print(thetaE)  
print(thetaD)  
