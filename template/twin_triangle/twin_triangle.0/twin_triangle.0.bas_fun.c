/*************************************************************************
* 	twin_tirangle.0.bas_fun.c : by R.Lie
*/

void chi_1(const double * p, const double ** v, void * value)
{
	double * val = (double *)value;
	val[0] = 1.0;
};

void gradient_chi_1(const double * p, const double ** v, void * value)
{
	double * val = (double *)value;
	val[0] = 0.0;
	val[1] = 0.0;
};

/*
*  end of file
**************************************************************************/
