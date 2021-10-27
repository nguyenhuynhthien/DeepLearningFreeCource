#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "myKerasModel.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_dense_6_input_input_array[2] = {
+3.07003782e-01,-1.58410781e+00,}; 
k2c_tensor test1_dense_6_input_input = {&test1_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test1_array[1] = {
+9.99913335e-01,}; 
k2c_tensor keras_dense_8_test1 = {&keras_dense_8_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test1_array[1] = {0}; 
k2c_tensor c_dense_8_test1 = {&c_dense_8_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_dense_6_input_input_array[2] = {
-2.90583290e-01,-1.19369402e+00,}; 
k2c_tensor test2_dense_6_input_input = {&test2_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test2_array[1] = {
+9.99705791e-01,}; 
k2c_tensor keras_dense_8_test2 = {&keras_dense_8_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test2_array[1] = {0}; 
k2c_tensor c_dense_8_test2 = {&c_dense_8_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_dense_6_input_input_array[2] = {
+1.30367313e-01,-1.46258651e-01,}; 
k2c_tensor test3_dense_6_input_input = {&test3_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test3_array[1] = {
+9.99751925e-01,}; 
k2c_tensor keras_dense_8_test3 = {&keras_dense_8_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test3_array[1] = {0}; 
k2c_tensor c_dense_8_test3 = {&c_dense_8_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_dense_6_input_input_array[2] = {
-1.07599666e-01,+2.48262041e-01,}; 
k2c_tensor test4_dense_6_input_input = {&test4_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test4_array[1] = {
+9.99050736e-01,}; 
k2c_tensor keras_dense_8_test4 = {&keras_dense_8_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test4_array[1] = {0}; 
k2c_tensor c_dense_8_test4 = {&c_dense_8_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_dense_6_input_input_array[2] = {
+1.72831990e-01,-1.30487358e+00,}; 
k2c_tensor test5_dense_6_input_input = {&test5_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test5_array[1] = {
+9.99900341e-01,}; 
k2c_tensor keras_dense_8_test5 = {&keras_dense_8_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test5_array[1] = {0}; 
k2c_tensor c_dense_8_test5 = {&c_dense_8_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_dense_6_input_input_array[2] = {
+1.60034196e+00,-1.59259748e+00,}; 
k2c_tensor test6_dense_6_input_input = {&test6_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test6_array[1] = {
+9.99906182e-01,}; 
k2c_tensor keras_dense_8_test6 = {&keras_dense_8_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test6_array[1] = {0}; 
k2c_tensor c_dense_8_test6 = {&c_dense_8_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_dense_6_input_input_array[2] = {
-5.43477132e-01,+1.05806375e+00,}; 
k2c_tensor test7_dense_6_input_input = {&test7_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test7_array[1] = {
+1.68681145e-04,}; 
k2c_tensor keras_dense_8_test7 = {&keras_dense_8_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test7_array[1] = {0}; 
k2c_tensor c_dense_8_test7 = {&c_dense_8_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_dense_6_input_input_array[2] = {
-5.95192073e-01,+2.22104480e-01,}; 
k2c_tensor test8_dense_6_input_input = {&test8_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test8_array[1] = {
+2.24858522e-04,}; 
k2c_tensor keras_dense_8_test8 = {&keras_dense_8_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test8_array[1] = {0}; 
k2c_tensor c_dense_8_test8 = {&c_dense_8_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_dense_6_input_input_array[2] = {
+6.78106250e-01,-7.49440658e-02,}; 
k2c_tensor test9_dense_6_input_input = {&test9_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test9_array[1] = {
+7.89433956e-01,}; 
k2c_tensor keras_dense_8_test9 = {&keras_dense_8_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test9_array[1] = {0}; 
k2c_tensor c_dense_8_test9 = {&c_dense_8_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_dense_6_input_input_array[2] = {
-1.78880356e+00,-4.13881976e-01,}; 
k2c_tensor test10_dense_6_input_input = {&test10_dense_6_input_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_dense_8_test10_array[1] = {
+1.32828951e-04,}; 
k2c_tensor keras_dense_8_test10 = {&keras_dense_8_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_8_test10_array[1] = {0}; 
k2c_tensor c_dense_8_test10 = {&c_dense_8_test10_array[0],1,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
myKerasModel_initialize(); 
clock_t t0 = clock(); 
myKerasModel(&test1_dense_6_input_input,&c_dense_8_test1); 
myKerasModel(&test2_dense_6_input_input,&c_dense_8_test2); 
myKerasModel(&test3_dense_6_input_input,&c_dense_8_test3); 
myKerasModel(&test4_dense_6_input_input,&c_dense_8_test4); 
myKerasModel(&test5_dense_6_input_input,&c_dense_8_test5); 
myKerasModel(&test6_dense_6_input_input,&c_dense_8_test6); 
myKerasModel(&test7_dense_6_input_input,&c_dense_8_test7); 
myKerasModel(&test8_dense_6_input_input,&c_dense_8_test8); 
myKerasModel(&test9_dense_6_input_input,&c_dense_8_test9); 
myKerasModel(&test10_dense_6_input_input,&c_dense_8_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 (double)(t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_8_test1,&c_dense_8_test1); 
errors[1] = maxabs(&keras_dense_8_test2,&c_dense_8_test2); 
errors[2] = maxabs(&keras_dense_8_test3,&c_dense_8_test3); 
errors[3] = maxabs(&keras_dense_8_test4,&c_dense_8_test4); 
errors[4] = maxabs(&keras_dense_8_test5,&c_dense_8_test5); 
errors[5] = maxabs(&keras_dense_8_test6,&c_dense_8_test6); 
errors[6] = maxabs(&keras_dense_8_test7,&c_dense_8_test7); 
errors[7] = maxabs(&keras_dense_8_test8,&c_dense_8_test8); 
errors[8] = maxabs(&keras_dense_8_test9,&c_dense_8_test9); 
errors[9] = maxabs(&keras_dense_8_test10,&c_dense_8_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
myKerasModel_terminate(); 
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

