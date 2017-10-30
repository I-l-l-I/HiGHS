//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <math.h>
//#include <time.h>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
//enum objSense
//{
//  OBJSENSE_MINIMIZE = 1,
//  OBJSENSE_MAXIMIZE = -1
//};
//const double HSOL_CONST_INF = 1e200;
enum mps_r_ty
{
  MPS_ROW_TY_N = 0,
  MPS_ROW_TY_E = 1,
  MPS_ROW_TY_L = 2,
  MPS_ROW_TY_G = 3
};

int readInput_c(const char *filename, int* numRow_p, int* numCol_p, int* objSense_p, double* objOffset_p,
		double ** A_cw_p,
		double ** rhs_p, double ** cost_p, double ** lb_p, double ** ub_p,
		int** integerColumn_p);
int readMPS_dense_c(const char *filename, int* numRow_p, int* numCol_p, int* objSense_p, double* objOffset_p,
		    double ** A_cw_p,
		    double ** rhs_p, double ** cost_p, double ** lb_p, double ** ub_p,
		    int** integerColumn_p);
int writeMPS_dense_c(const char *filename, int* numRow_p, int* numCol_p, int* objSense_p, double* objOffset_p,
		     double ** A_cw_p,
		     double ** rhs_p, double ** cost_p, double ** lb_p, double ** ub_p,
		     int** integerColumn_p);

int readMPS_dense(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
		  vector<double>& A_cw,
		  vector<double>& rhs, vector<double>& cost, vector<double>& lb, vector<double>& ub,
		  vector<int>& integerColumn);
int writeMPS_dense(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
		   vector<double>& A_cw,
		   vector<double>& rhs, vector<double>& cost, vector<double>& lb, vector<double>& ub,
		   vector<int>& integerColumn);

int readMPS_sparse(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
		   vector<int>& Astart, vector<int>& Aindex, vector<double>& Avalue,
		   vector<double>& rhs, vector<double>& cost, vector<double>& lb, vector<double>& ub,
		   vector<int>& integerColumn);
int writeMPS_sparse(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
		    vector<int>& Astart, vector<int>& Aindex, vector<double>& Avalue,
		    vector<double>& rhs, vector<double>& cost, vector<double>& lb, vector<double>& ub,
		    vector<int>& integerColumn);

int readMPS(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
	    vector<int>& Astart, vector<int>& Aindex, vector<double>& Avalue,
	    vector<double>& colCost, vector<double>& colLower, vector<double>& colUpper,
	    vector<double>& rowLower, vector<double>& rowUpper,
	    vector<int>& integerColumn);
int writeMPS(const char *filename, int& numRow, int& numCol, int& objSense, double& objOffset,
	     vector<int>& Astart, vector<int>& Aindex, vector<double>& Avalue,
	     vector<double>& colCost, vector<double>& colLower, vector<double>& colUpper,
	     vector<double>& rowLower, vector<double>& rowUpper,
	     vector<int>& integerColumn);

bool load_mpsLine(FILE *file, int& integerVar, int lmax, char *line, char *flag, double *data);
int isspace ( int c );
char * fgets ( char * str, int num, FILE * stream );

inline const char * const BoolToString(bool b);

