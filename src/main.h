/*
 * @Author: Andrew Abi Mansour
 * @Created: March Jan 14, 2013
 *
 * MSR is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 *
 * MSR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with DMS; if not, see
 * http://www.gnu.org/licenses, or write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
 *
 */

#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <petscksp.h>
#include <petscmat.h>
#include <vector>
#include <algorithm>
#include <cassert>

PetscErrorCode NewtonIter(std::vector<Vec>&, std::vector<Vec>&, PetscInt*, PetscInt*, Vec&, Mat&, char*, PetscReal);
PetscErrorCode writeVector(std::vector<Vec>& Coords, const char* fname);
PetscErrorCode readVectorASCII(Vec& Vector, char* fname, const PetscInt nrows, const char* type);
PetscErrorCode readMatrixASCII(Mat& Matrix, char* fname, const PetscInt nrows, const PetscInt ncols, const char* type);
PetscErrorCode writeVector(std::vector<Vec>& Coords, const char* fname);
PetscErrorCode cleanUp(Mat&, Vec&, std::vector<Vec>&, std::vector<Vec>&);
PetscBool readInput(char*, char*, char*, char*, char*, char*, PetscInt&, PetscInt&, PetscInt&);
int countLines(std::string filename);

#define MAX_ITERS 100

#endif
