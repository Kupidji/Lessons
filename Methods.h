#pragma once
#include <iostream>

using namespace std;

void sayMyName(string name);
int sum(int a, int b);
void sayInfo(string name);
void sayInfo(string name, int age);
void sayInfo(string name, int age, int weight);
template <typename T> T sum2(T a, T b);
template <typename T1, typename T2> T1 sum3(T1 a, T2 b);