#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "function_name_1.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_dense_input_input_array[7] = {
+1.34787976e+00,+1.98780745e+00,+1.00129199e+00,-1.48358942e+00,+8.17256902e-01,
+8.26758336e-01,-2.60294110e-01,}; 
k2c_tensor test1_dense_input_input = {&test1_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test1_array[1] = {
+7.62399197e-01,}; 
k2c_tensor keras_dense_2_test1 = {&keras_dense_2_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test1_array[1] = {0}; 
k2c_tensor c_dense_2_test1 = {&c_dense_2_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_dense_input_input_array[7] = {
-1.68116418e+00,+4.85705649e-01,+4.22285618e-01,-1.41618424e+00,+3.51815729e-01,
-1.35633476e+00,-1.68048220e+00,}; 
k2c_tensor test2_dense_input_input = {&test2_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test2_array[1] = {
+6.82903230e-01,}; 
k2c_tensor keras_dense_2_test2 = {&keras_dense_2_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test2_array[1] = {0}; 
k2c_tensor c_dense_2_test2 = {&c_dense_2_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_dense_input_input_array[7] = {
+1.37536468e+00,-3.44647902e-01,-9.48961976e-01,-4.25959727e-01,-8.42880953e-01,
+1.06928671e-03,-1.79556317e+00,}; 
k2c_tensor test3_dense_input_input = {&test3_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test3_array[1] = {
+8.16214561e-01,}; 
k2c_tensor keras_dense_2_test3 = {&keras_dense_2_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test3_array[1] = {0}; 
k2c_tensor c_dense_2_test3 = {&c_dense_2_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_dense_input_input_array[7] = {
+6.90719231e-01,-1.96227781e+00,-4.48686522e-01,+1.36193538e+00,-1.49067805e+00,
+1.16005002e+00,+1.97404828e+00,}; 
k2c_tensor test4_dense_input_input = {&test4_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test4_array[1] = {
+9.50314403e-01,}; 
k2c_tensor keras_dense_2_test4 = {&keras_dense_2_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test4_array[1] = {0}; 
k2c_tensor c_dense_2_test4 = {&c_dense_2_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_dense_input_input_array[7] = {
-1.69297193e+00,+1.27375492e+00,+6.91150490e-01,-1.57480130e+00,-1.14783071e+00,
-2.37489916e-01,+6.54343797e-01,}; 
k2c_tensor test5_dense_input_input = {&test5_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test5_array[1] = {
+8.10211539e-01,}; 
k2c_tensor keras_dense_2_test5 = {&keras_dense_2_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test5_array[1] = {0}; 
k2c_tensor c_dense_2_test5 = {&c_dense_2_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_dense_input_input_array[7] = {
-1.98376921e+00,-1.48965887e+00,-5.28554465e-01,-9.72278581e-01,-7.67808401e-01,
-1.00215790e+00,-3.18029921e-01,}; 
k2c_tensor test6_dense_input_input = {&test6_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test6_array[1] = {
+4.69238251e-01,}; 
k2c_tensor keras_dense_2_test6 = {&keras_dense_2_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test6_array[1] = {0}; 
k2c_tensor c_dense_2_test6 = {&c_dense_2_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_dense_input_input_array[7] = {
+1.06949795e+00,-1.15771632e+00,+5.29782349e-01,+1.93554141e+00,-1.24898797e+00,
-6.95405578e-01,-1.52393140e+00,}; 
k2c_tensor test7_dense_input_input = {&test7_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test7_array[1] = {
+9.42694545e-01,}; 
k2c_tensor keras_dense_2_test7 = {&keras_dense_2_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test7_array[1] = {0}; 
k2c_tensor c_dense_2_test7 = {&c_dense_2_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_dense_input_input_array[7] = {
+1.33562309e+00,-1.89289726e+00,-2.43281838e-01,+2.00777558e-02,+5.55929327e-01,
+1.92650023e+00,-1.31143495e+00,}; 
k2c_tensor test8_dense_input_input = {&test8_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test8_array[1] = {
+1.07922792e+00,}; 
k2c_tensor keras_dense_2_test8 = {&keras_dense_2_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test8_array[1] = {0}; 
k2c_tensor c_dense_2_test8 = {&c_dense_2_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_dense_input_input_array[7] = {
-1.47363008e+00,+1.89860357e+00,+1.50308848e+00,-1.11231516e+00,+9.01429126e-01,
+1.22922071e+00,-4.86089361e-01,}; 
k2c_tensor test9_dense_input_input = {&test9_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test9_array[1] = {
+1.02008200e+00,}; 
k2c_tensor keras_dense_2_test9 = {&keras_dense_2_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test9_array[1] = {0}; 
k2c_tensor c_dense_2_test9 = {&c_dense_2_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_dense_input_input_array[7] = {
+1.38078771e-01,+1.71757748e+00,+1.75533915e+00,-9.64201481e-01,+9.43958819e-01,
-1.42064559e+00,+1.20343628e+00,}; 
k2c_tensor test10_dense_input_input = {&test10_dense_input_input_array[0],1,7,{7,1,1,1,1}}; 
float keras_dense_2_test10_array[1] = {
+8.61024380e-01,}; 
k2c_tensor keras_dense_2_test10 = {&keras_dense_2_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test10_array[1] = {0}; 
k2c_tensor c_dense_2_test10 = {&c_dense_2_test10_array[0],1,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
function_name_1_initialize(); 
clock_t t0 = clock(); 
function_name_1(&test1_dense_input_input,&c_dense_2_test1); 
function_name_1(&test2_dense_input_input,&c_dense_2_test2); 
function_name_1(&test3_dense_input_input,&c_dense_2_test3); 
function_name_1(&test4_dense_input_input,&c_dense_2_test4); 
function_name_1(&test5_dense_input_input,&c_dense_2_test5); 
function_name_1(&test6_dense_input_input,&c_dense_2_test6); 
function_name_1(&test7_dense_input_input,&c_dense_2_test7); 
function_name_1(&test8_dense_input_input,&c_dense_2_test8); 
function_name_1(&test9_dense_input_input,&c_dense_2_test9); 
function_name_1(&test10_dense_input_input,&c_dense_2_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 (double)(t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_2_test1,&c_dense_2_test1); 
errors[1] = maxabs(&keras_dense_2_test2,&c_dense_2_test2); 
errors[2] = maxabs(&keras_dense_2_test3,&c_dense_2_test3); 
errors[3] = maxabs(&keras_dense_2_test4,&c_dense_2_test4); 
errors[4] = maxabs(&keras_dense_2_test5,&c_dense_2_test5); 
errors[5] = maxabs(&keras_dense_2_test6,&c_dense_2_test6); 
errors[6] = maxabs(&keras_dense_2_test7,&c_dense_2_test7); 
errors[7] = maxabs(&keras_dense_2_test8,&c_dense_2_test8); 
errors[8] = maxabs(&keras_dense_2_test9,&c_dense_2_test9); 
errors[9] = maxabs(&keras_dense_2_test10,&c_dense_2_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
function_name_1_terminate(); 
if (maxerror > 1e-05) { 
return 1;} 
return 0;
} 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2){ 

    float x = 0; 

    float y = 0; 

    for(size_t i=0; i<tensor1->numel; i++){

    y = fabs(tensor1->array[i]-tensor2->array[i]);
    if (y>x) {x=y;}}
    return x;}

