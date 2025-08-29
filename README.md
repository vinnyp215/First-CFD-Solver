This is my attempt at writing a CFD Solver in C++.

I will be mostly following Owkes' "A guide to writing your first CFD solver"
https://www.montana.edu/mowkes/research/source-codes/GuideToCFD.pdf

The steps contained within the code are:

1. Set input parameters: viscosity, density, number of grid points, time information, and boundary conditions

2. Create the index extents and the computational grid

3. Initialise any arrays 

4. Create the Laplacian operator

5. Apply boundary conditions to the initial velocity field

6. Loop over time 
  - Update time
  - Perform the predictor step to find u* and v*
  - Apply boundary conditions to the predicted velocity field
  - Form the right hand side of the Poisson equation
  - Solve for the pressure using pv=L/R and convert the pressure vector pv into a matrix p(i,j)
  - Perform the corrector step to find u^n+1 and v^n+1 
  - Plot the velocity field and the pressure field

7. End simulation

8. Plot
