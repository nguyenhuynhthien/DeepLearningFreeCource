#include <math.h>
#include <string.h>
#include "./include/k2c_include.h"
#include "./include/k2c_tensor_include.h"

void myKerasModel(k2c_tensor *dense_6_input_input, k2c_tensor *dense_8_output)
{

	float dense_6_output_array[4] = {0};
	k2c_tensor dense_6_output = {&dense_6_output_array[0], 1, 4, {4, 1, 1, 1, 1}};
	/* weight layer 1 */
	float dense_6_kernel_array[8] = {
		-2.28838563e+00,
		-4.42493916e+00,
		+6.29030883e-01,
		-3.47096038e+00,
		+1.46589339e+00,
		-2.36078286e+00,
		+4.38154370e-01,
		+2.11488557e+00,
	};
	/* bias layer 1 */
	k2c_tensor dense_6_kernel = {&dense_6_kernel_array[0], 2, 8, {2, 4, 1, 1, 1}};
	float dense_6_bias_array[4] = {
		+2.89432430e+00,
		+2.68527102e+00,
		-6.23548627e-01,
		-1.49221790e+00,
	};
	k2c_tensor dense_6_bias = {&dense_6_bias_array[0], 1, 4, {4, 1, 1, 1, 1}};
	float dense_6_fwork[10] = {0};

	float dense_7_output_array[2] = {0};
	k2c_tensor dense_7_output = {&dense_7_output_array[0], 1, 2, {2, 1, 1, 1, 1}};
	/* weight layer 2 */
	float dense_7_kernel_array[8] = {
		+2.60154533e+00,
		+2.63092113e+00,
		-2.58140516e+00,
		-3.57659078e+00,
		-7.23730087e-01,
		+2.66932696e-01,
		+1.12457979e+00,
		+3.85096383e+00,
	};
	k2c_tensor dense_7_kernel = {&dense_7_kernel_array[0], 2, 8, {4, 2, 1, 1, 1}};
	/*  bias layer 2 */
	float dense_7_bias_array[2] = {
		-2.08245277e-01,
		+4.30890732e-02,
	};
	k2c_tensor dense_7_bias = {&dense_7_bias_array[0], 1, 2, {2, 1, 1, 1, 1}};
	float dense_7_fwork[12] = {0};
	/* weight output */
	float dense_8_kernel_array[2] = {
		-3.73759961e+00,
		-5.56842327e+00,
	};
	k2c_tensor dense_8_kernel = {&dense_8_kernel_array[0], 2, 2, {2, 1, 1, 1, 1}};
	/* bias output */
	float dense_8_bias_array[1] = {
		+5.17015308e-02,
	};
	k2c_tensor dense_8_bias = {&dense_8_bias_array[0], 1, 1, {1, 1, 1, 1, 1}};
	float dense_8_fwork[4] = {0};

	k2c_dense(&dense_6_output, dense_6_input_input, &dense_6_kernel,
			  &dense_6_bias, k2c_tanh, dense_6_fwork);
	k2c_dense(&dense_7_output, &dense_6_output, &dense_7_kernel,
			  &dense_7_bias, k2c_tanh, dense_7_fwork);
	k2c_dense(dense_8_output, &dense_7_output, &dense_8_kernel,
			  &dense_8_bias, k2c_sigmoid, dense_8_fwork);
}

void myKerasModel_initialize()
{
}

void myKerasModel_terminate()
{
}
