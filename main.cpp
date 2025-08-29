/* File: main.cpp
This is the main file for a CFD solver */

#include <iostream>

// --- SET PARAMETERS ---

// Global variables
rho = 1.0; // Density
nu = 0.1; // Viscosity
dt = 0.001;

// Define domain
x_min = 0.0;
x_max = 2.0;
nx = 41;
dx = (x_max - x_min)/(nx - 1);

y_min = 0.0;
y_max = 2.0;
ny = 41;
dy = (y_max - y_min)/(ny - 1);

// Data structures
int u[ny][nx] // Velocities
int v[ny][nx]
int p[ny][nx] //Pressure

// Boundary conditions
int set_velocity_boundary(u,v){
  u[0,:] = 0
  u[:,0] = 0
  u[:,-1] = 1
  u[-1,:] = 0

  v[0,:] = 0
  v[:,0] = 0
  v[:,-1] = 0
  v[-1,:] = 0

  return u,v
}

int set_pressure_boundary(p){
  p[:, -1] = p[:, -2] // dp/dx = 0 at x = 2
  p[0, :] = p[1, :]   // dp/dy = 0 at y = 0
  p[:, 0] = p[:, 1]   // dp/dx = 0 at x = 0
  // Pressure boundary conditions (Dirichlet or "fixed")
  p[-1, :] = 0        // p = 0 at y = 2

  return p
}

// Create computational grid


// Initialise 


// Create Laplacian operator


//
