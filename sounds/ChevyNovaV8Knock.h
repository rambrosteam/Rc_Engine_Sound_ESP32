const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 3867;
const signed char knockSamples[] = {
0, 8, 22, 27, 15, 7, 27, 38, 37, 38, 49, 58, 54, 51, 58, 66, 
66, 62, 68, 72, 71, 74, 82, 80, 79, 88, 98, 98, 91, 92, 98, 101, 
100, 98, 103, 108, 104, 93, 90, 99, 102, 95, 93, 92, 90, 88, 87, 82, 
80, 87, 93, 94, 96, 97, 98, 101, 106, 102, 97, 98, 105, 108, 106, 100, 
97, 98, 99, 91, 73, 82, 90, 69, 32, 13, 6, 11, 27, 35, 25, 22, 
40, 47, 53, 54, 38, 20, 34, 44, 39, 33, 33, 30, 31, 34, 35, 36, 
43, 48, 42, 46, 63, 67, 50, 53, 59, 55, 57, 68, 64, 57, 61, 59, 
52, 56, 54, 38, 39, 48, 39, 23, 31, 28, 15, 9, 8, 0, 1, -1, 
-9, -9, 0, -3, -7, -3, -5, -13, 0, 9, 10, 17, 20, 9, 13, 30, 
22, 1, 0, 16, 8, 1, 5, 14, 15, 6, 10, 19, 21, 12, 5, 10, 
14, 14, 9, 4, 3, 1, -10, -21, -20, -10, -19, -36, -42, -41, -35, -33, 
-48, -55, -56, -58, -53, -33, -45, -65, -61, -45, -41, -49, -47, -42, -48, -70, 
-82, -51, -55, -74, -62, -55, -104, -69, -14, -46, -103, -75, -41, -85, -80, -58, 
-94, -114, -42, -67, -116, -85, -34, -90, -121, -94, -68, -84, -105, -56, -38, -86, 
-117, -76, -49, -117, -93, -33, -53, -110, -90, -93, -117, -88, -57, -96, -108, -61, 
-82, -122, -91, -54, -98, -91, -54, -50, -80, -114, -95, -65, -81, -117, -89, -33, 
-90, -127, -102, -94, -117, -92, -85, -112, -115, -94, -102, -105, -90, -87, -103, -106, 
-73, -70, -96, -107, -75, -46, -66, -57, -43, -66, -79, -37, -71, -100, -40, 18, 
-16, -41, -12, -29, -34, 21, 2, -41, 15, 71, 22, -23, 53, 35, -16, 13, 
48, 2, -14, 40, 25, -8, 23, 37, 3, 23, 48, 14, -13, 30, 41, 41, 
47, 41, 49, 86, 51, 16, 47, 76, 38, 54, 86, 76, 49, 45, 48, 53, 
45, 20, 23, 54, 13, -14, 35, 74, 31, -7, 27, 26, -3, -10, -1, 7, 
23, 25, -3, -16, 8, 15, -8, -7, 9, 7, 2, 15, 21, 16, 19, 33, 
39, 24, 21, 37, 51, 54, 68, 75, 75, 87, 99, 83, 86, 104, 101, 85, 
91, 111, 98, 92, 106, 118, 111, 100, 103, 107, 106, 105, 109, 112, 113, 110, 
108, 108, 106, 105, 109, 111, 105, 99, 106, 105, 96, 92, 94, 92, 95, 102, 
94, 76, 83, 105, 84, 73, 91, 90, 58, 63, 76, 55, 37, 49, 51, 33, 
22, 12, 2, -3, -11, -17, -19, -18, -19, -26, -39, -44, -40, -41, -43, -29, 
-38, -58, -52, -30, -35, -56, -36, -19, -29, -44, -43, -42, -45, -50, -55, -58, 
-61, -64, -69, -75, -79, -80, -75, -71, -65, -64, -66, -64, -60, -59, -57, -54, 
-55, -54, -42, -36, -42, -43, -32, -36, -47, -37, -27, -43, -45, -17, -20, -38, 
-23, 5, -12, -17, -1, 4, 2, 16, 26, 25, 41, 51, 39, 39, 53, 51, 
43, 47, 54, 54, 51, 49, 52, 59, 57, 41, 41, 42, 32, 23, 27, 29, 
28, 25, 21, 22, 32, 24, 8, 9, 25, 28, 9, 14, 29, 32, 27, 31, 
36, 33, 29, 28, 27, 32, 35, 31, 23, 20, 18, 7, 4, 6, 1, -11, 
-18, -10, -6, -16, -29, -24, -8, -16, -21, -7, 6, 6, 1, 2, 5, 10, 
16, 23, 25, 18, 9, 14, 25, 20, 18, 23, 24, 20, 17, 11, 4, 1, 
0, 6, 16, 10, 4, 11, 14, 0, -1, 17, 21, 14, 14, 17, 21, 32, 
37, 33, 33, 49, 54, 51, 51, 62, 74, 68, 67, 80, 89, 81, 79, 87, 
87, 84, 88, 92, 88, 83, 79, 75, 72, 70, 66, 55, 46, 51, 58, 41, 
44, 61, 56, 37, 41, 55, 36, 30, 43, 41, 30, 36, 26, 5, 1, 2, 
-28, -39, -41, -55, -74, -79, -80, -87, -93, -97, -100, -99, -99, -100, -98, -96, 
-99, -103, -102, -104, -106, -107, -110, -112, -111, -112, -115, -116, -117, -119, -119, -119, 
-119, -119, -120, -122, -120, -116, -114, -113, -111, -108, -106, -106, -105, -100, -93, -96, 
-98, -90, -80, -83, -89, -81, -56, -44, -65, -72, -37, -32, -63, -74, -48, -22, 
-20, -21, -29, -31, -17, -12, 0, 8, -7, -11, 44, 50, 21, 10, 30, 72, 
71, 25, -10, 30, 78, 5, -16, 43, 79, 47, 12, 10, 37, 72, 57, -1, 
9, 47, 25, -8, -5, 7, 16, 15, -16, -37, -17, -14, -57, -35, -21, -61, 
-82, -24, -29, -61, -65, -44, -12, 2, -44, -71, -31, 11, -4, -37, -31, -23, 
-15, -28, -78, -58, -23, -34, -56, -48, -75, -116, -101, -58, -60, -100, -106, -77, 
-69, -93, -120, -96, -48, -27, -51, -79, -68, -7, 1, -27, -45, -8, 44, 16, 
10, 59, 63, 1, 9, 49, 39, 36, 56, 28, -59, -58, -29, 15, 45, 7, 
-83, -52, -16, -40, -55, 21, 29, -28, -76, -64, -6, 40, -13, -66, -41, 20, 
37, 40, 35, -22, -47, 15, 32, -8, 40, 88, 35, -17, 39, 51, 48, 69, 
55, 7, 42, 86, 56, 10, 27, 78, 40, 7, 35, 65, 33, -16, 5, 15, 
17, 31, 2, -33, -23, -2, -5, 0, 25, 0, -12, 29, 73, 68, 34, 41, 
58, 72, 71, 42, 44, 61, 46, 8, 2, 46, 40, 6, -28, -51, -44, 15, 
7, -53, -88, -66, -47, -61, -46, -21, -28, -56, -66, -43, 1, 36, 17, -36, 
-34, 16, 26, 1, 0, 54, 50, 17, 9, 37, 67, 68, 42, 22, 38, 77, 
89, 54, 50, 66, 75, 71, 72, 84, 99, 99, 78, 60, 85, 101, 94, 90, 
96, 81, 41, 56, 82, 86, 83, 76, 58, 58, 79, 83, 69, 77, 77, 62, 
60, 72, 70, 58, 57, 47, 37, 40, 50, 42, 19, -11, -22, -7, 11, -3, 
-23, -28, -12, -2, -42, -49, -15, 3, -21, -35, -18, -15, -23, -34, -49, -28, 
9, -5, -61, -72, -25, -11, -46, -55, -43, -37, -39, -56, -69, -44, -9, -23, 
-68, -35, 6, 1, -26, -19, 5, 23, 30, 27, 28, 60, 75, 60, 43, 61, 
95, 94, 80, 82, 89, 93, 102, 100, 94, 95, 99, 95, 88, 92, 101, 109, 
107, 88, 67, 85, 105, 98, 74, 66, 77, 83, 79, 66, 49, 34, 44, 58, 
59, 46, 33, 22, 19, 26, 34, 30, 19, 17, 6, -4, 3, 14, -3, -19, 
-24, -22, -22, -33, -55, -58, -58, -65, -71, -70, -73, -83, -94, -103, -102, -86, 
-90, -103, -111, -110, -100, -87, -95, -105, -100, -85, -79, -82, -81, -68, -45, -34, 
-52, -51, -33, -28, -37, -38, -30, -36, -37, -29, -21, -24, -37, -47, -38, -23, 
-25, -36, -22, -12, -23, -35, -25, 8, 11, -4, -15, -13, -7, -13, -12, 0, 
4, -14, -41, -26, -8, -17, -39, -42, -32, -36, -33, -21, -19, -31, -30, -26, 
-24, -13, 4, 1, -14, -20, -16, -17, -16, -7, -13, -37, -51, -38, -31, -55, 
-74, -76, -71, -67, -69, -80, -83, -75, -73, -86, -73, -48, -42, -61, -76, -52, 
-31, -33, -48, -53, -50, -56, -59, -56, -55, -57, -76, -93, -83, -59, -58, -77, 
-85, -86, -81, -59, -48, -61, -47, -30, -42, -48, -28, -20, -17, 3, 2, -21, 
-15, 24, 23, 29, 47, 40, 16, 43, 77, 77, 61, 62, 84, 84, 77, 72, 
69, 66, 78, 90, 88, 80, 80, 78, 67, 75, 88, 98, 100, 49, 18, 45, 
88, 86, 60, 54, 59, 70, 66, 17, -23, 39, 66, 33, 1, -1, -7, -18, 
-35, -45, -23, 7, -38, -82, -76, -51, -52, -68, -70, -75, -88, -91, -88, -95, 
-96, -93, -95, -101, -101, -94, -96, -103, -109, -110, -103, -93, -104, -113, -104, -94, 
-109, -112, -100, -99, -110, -111, -106, -110, -103, -91, -95, -109, -101, -89, -87, -93, 
-99, -93, -84, -85, -84, -62, -40, -64, -82, -76, -69, -67, -32, -17, -31, -45, 
-44, -41, -35, -27, -27, -33, -33, -31, -23, -8, 2, -6, -19, -10, 7, 9, 
2, 6, 18, 17, 22, 44, 61, 57, 41, 30, 37, 46, 49, 49, 55, 49, 
34, 29, 47, 65, 47, 33, 40, 56, 65, 68, 57, 41, 37, 54, 76, 77, 
66, 59, 57, 57, 61, 75, 74, 59, 42, 43, 60, 71, 63, 64, 69, 63, 
58, 68, 75, 75, 72, 73, 77, 81, 83, 83, 81, 80, 83, 83, 83, 83, 
81, 80, 82, 78, 75, 79, 78, 59, 60, 70, 69, 60, 53, 51, 54, 59, 
58, 54, 58, 61, 65, 71, 71, 64, 57, 60, 65, 68, 65, 60, 58, 56, 
49, 40, 40, 46, 41, 28, 23, 31, 36, 20, 19, 31, 35, 26, 24, 31, 
26, 15, 16, 29, 33, 22, 15, 19, 23, 18, 11, 18, 26, 24, 11, 5, 
14, 16, 9, 6, 9, 11, 8, 2, -4, -9, -9, -4, -4, -10, -14, -9, 
-5, -12, -13, -12, -16, -20, -19, -21, -22, -22, -20, -12, -4, -19, -30, -29, 
-32, -41, -33, -29, -36, -43, -46, -47, -43, -46, -57, -60, -54, -55, -60, -60, 
-64, -74, -75, -65, -62, -64, -66, -67, -67, -60, -56, -60, -62, -54, -44, -43, 
-39, -39, -44, -38, -30, -30, -32, -28, -27, -32, -35, -33, -27, -25, -35, -42, 
-35, -36, -44, -47, -38, -33, -30, -30, -31, -28, -29, -34, -27, -5, 10, 9, 
3, 3, 3, 10, 22, 26, 20, 16, 17, 20, 23, 24, 21, 13, 8, 11, 
18, 19, 12, 8, 10, 17, 35, 43, 39, 32, 34, 43, 53, 58, 59, 53, 
48, 62, 74, 76, 71, 64, 58, 62, 69, 77, 80, 74, 61, 55, 63, 66, 
62, 59, 60, 59, 59, 62, 67, 65, 53, 55, 65, 66, 57, 53, 64, 67, 
69, 73, 71, 64, 68, 72, 72, 72, 74, 65, 60, 65, 68, 56, 42, 44, 
45, 37, 24, 6, -18, -16, -9, -12, -24, -31, -44, -50, -43, -35, -41, -50, 
-37, -29, -32, -31, -23, -24, -32, -35, -30, -26, -31, -48, -56, -58, -56, -59, 
-74, -92, -89, -92, -104, -111, -106, -110, -115, -110, -106, -104, -101, -100, -101, -97, 
-89, -81, -73, -72, -73, -67, -52, -33, -38, -55, -69, -60, -39, -43, -56, -57, 
-58, -69, -74, -71, -65, -48, -45, -72, -84, -59, -46, -43, -45, -56, -56, -48, 
-59, -60, -29, -16, -55, -50, -35, -41, -41, -30, -38, -45, -54, -61, -47, -44, 
-74, -67, -35, -48, -88, -47, -9, -19, -58, -95, -62, 12, 29, -29, -77, -74, 
-48, -25, -10, -26, -42, -19, -21, -38, -51, -65, -64, -20, -46, -104, -96, -31, 
-15, -88, -109, -103, -85, -56, -55, -87, -98, -88, -81, -79, -71, -68, -55, -36, 
-44, -75, -71, -45, -43, -48, -42, -58, -74, -63, -49, -55, -70, -78, -64, -44, 
-44, -58, -55, -38, -33, -17, -6, -18, -8, 6, -4, 0, 25, 22, 1, 33, 
44, 12, 1, 22, 17, 17, 46, 55, 33, 39, 57, 50, 44, 60, 74, 69, 
83, 95, 82, 74, 97, 111, 89, 88, 106, 105, 94, 104, 103, 93, 102, 110, 
83, 81, 98, 102, 90, 85, 91, 91, 91, 89, 81, 77, 90, 101, 95, 81, 
83, 95, 81, 71, 79, 83, 79, 86, 72, 43, 40, 61, 53, 41, 54, 67, 
57, 45, 38, 32, 46, 75, 77, 39, 49, 74, 69, 49, 47, 55, 48, 40, 
29, 20, 18, 9, -9, -13, -9, -18, -32, -23, -22, -33, -36, -21, -10, -19, 
-22, -9, 6, 4, 1, 11, 20, 23, 23, 6, 5, 23, 22, -8, -24, 0, 
-9, -30, -33, -30, -34, -32, -33, -41, -43, -44, -49, -36, -26, -29, -25, -9, 
-13, -20, -7, 5, 6, 12, 29, 26, 24, 28, 32, 38, 42, 41, 39, 40, 
37, 33, 36, 40, 42, 42, 41, 48, 52, 48, 40, 43, 66, 71, 61, 49, 
48, 53, 52, 48, 46, 44, 42, 41, 35, 19, 2, -2, 2, 3, -4, -15, 
-26, -26, -20, -28, -33, -21, -10, -21, -43, -40, -29, -29, -32, -34, -41, -43, 
-40, -41, -45, -50, -69, -71, -56, -54, -75, -88, -74, -76, -87, -90, -86, -86, 
-84, -87, -96, -98, -87, -70, -69, -70, -74, -77, -58, -41, -41, -49, -43, -26, 
-20, -27, -25, -12, -3, -4, -6, 0, 9, 20, 32, 31, 30, 40, 51, 57, 
66, 74, 71, 76, 88, 95, 93, 90, 89, 93, 101, 103, 97, 101, 106, 104, 
99, 100, 105, 104, 100, 100, 104, 109, 106, 105, 107, 108, 109, 112, 113, 114, 
113, 108, 104, 106, 107, 102, 98, 97, 93, 80, 75, 77, 75, 59, 37, 41, 
43, 30, 16, 14, 18, 15, 13, 9, 6, 3, -14, -26, -26, -23, -28, -40, 
-44, -57, -72, -78, -74, -77, -83, -85, -87, -92, -94, -92, -90, -90, -90, -89, 
-86, -87, -88, -87, -87, -88, -86, -84, -85, -86, -83, -84, -94, -93, -86, -84, 
-87, -93, -93, -88, -83, -86, -94, -88, -76, -74, -79, -80, -77, -65, -57, -57, 
-62, -58, -44, -36, -27, -21, -29, -38, -24, -11, -4, -6, -14, -23, -21, -24, 
-33, -34, -26, -28, -35, -30, -16, -14, -24, -34, -31, -24, -9, 9, -11, -40, 
-27, 23, 41, 4, -27, -1, 9, -16, -42, -43, -21, -22, -40, -63, -79, -80, 
-69, -71, -95, -108, -85, -63, -99, -120, -101, -82, -93, -111, -89, -53, -46, -86, 
-117, -73, -49, -71, -90, -87, -99, -82, -29, -16, -76, -121, -31, 6, -50, -105, 
-75, -11, -52, -99, -79, -21, -15, -103, -102, -55, -41, -62, -75, -77, -78, -67, 
-52, -43, -42, -35, -16, -5, -8, -1, 24, 29, 35, 25, -2, 9, 56, 29, 
12, 32, 38, 30, 41, 43, 51, 59, 27, -6, 49, 92, 81, 46, 23, 37, 
49, 43, 47, 58, 11, 6, 51, 56, 4, -15, 40, 33, -10, -27, 9, 62, 
37, -17, -24, 13, 44, 31, -4, -20, 3, 28, 23, -5, -12, -10, -7, -17, 
-42, -36, -17, -5, -13, -41, -71, -53, -38, -43, -51, -53, -53, -36, -26, -42, 
-55, -42, -56, -69, -42, 0, 7, -50, -75, -54, -14, -7, -26, -29, -21, -9, 
6, 3, -9, 14, 22, -1, -9, 10, 33, 36, 32, 30, 47, 64, 39, 25, 
36, 48, 48, 46, 59, 80, 89, 78, 63, 51, 54, 77, 103, 99, 78, 94, 
112, 107, 96, 99, 108, 111, 114, 111, 103, 99, 108, 113, 103, 88, 88, 97, 
88, 74, 62, 55, 66, 69, 40, 29, 44, 45, 31, 39, 30, 16, 33, 49, 
19, -15, 20, 40, 14, -14, -4, 6, 10, 17, 8, -14, -16, -11, -25, -37, 
-26, -3, 7, -18, -49, -48, -19, -16, -46, -54, -25, 4, -4, -44, -41, -26, 
-17, -15, -13, -3, 2, -11, -31, -28, 4, 0, -17, -18, -5, 6, 1, -1, 
2, 5, 12, 35, 37, 23, 15, 26, 43, 62, 69, 70, 68, 69, 77, 83, 
86, 93, 95, 92, 94, 97, 95, 89, 80, 72, 78, 74, 49, 28, 32, 39, 
10, -9, -6, 6, 4, -20, -19, 2, 18, 11, -7, -7, 10, 27, 32, 28, 
23, 20, 22, 30, 38, 34, 7, -5, -10, -13, -12, -7, -14, -25, -25, -18, 
-22, -37, -54, -60, -62, -58, -50, -50, -56, -66, -79, -82, -78, -83, -87, -80, 
-73, -74, -80, -87, -85, -76, -71, -72, -59, -50, -50, -48, -40, -35, -25, -12, 
-1, 6, 9, 4, 1, 23, 43, 39, 23, 32, 42, 37, 27, 24, 27, 38, 
46, 43, 30, 21, 25, 28, 16, 5, 9, 21, 25, 27, 37, 41, 35, 32, 
44, 57, 68, 71, 69, 74, 86, 83, 83, 92, 95, 89, 91, 94, 89, 84, 
85, 82, 68, 59, 61, 61, 31, 9, 3, 5, -1, -19, -36, -38, -44, -52, 
-55, -57, -59, -58, -57, -60, -60, -54, -50, -50, -49, -45, -37, -34, -38, -39, 
-44, -55, -64, -67, -74, -83, -87, -89, -101, -107, -108, -111, -115, -117, -117, -119, 
-121, -122, -120, -120, -122, -122, -118, -112, -109, -109, -108, -104, -100, -95, -88, -81, 
-80, -76, -70, -61, -53, -53, -58, -56, -45, -37, -43, -49, -54, -55, -49, -42, 
-47, -53, -53, -50, -43, -38, -43, -43, -37, -36, -39, -26, -23, -31, -31, -18, 
-12, -20, -16, -8, -6, -10, -13, -10, -5, -3, -7, -11, -8, -3, 1, 0, 
-7, -8, 0, 0, -1, 4, 7, 2, -9, -10, -10, -12, -16, -22, -24, -28, 
-34, -38, -42, -51, -53, -46, -42, -51, -60, -46, -34, -34, -36, -32, -24, -19, 
-12, -11, -14, -11, 5, 11, 5, -6, -8, -1, -5, -10, -8, -4, -3, -6, 
-11, -14, -7, 4, 6, 0, 5, 10, 8, 3, 2, 5, 12, 21, 23, 22, 
23, 23, 22, 23, 29, 32, 26, 25, 30, 36, 38, 41, 47, 52, 53, 56, 
62, 64, 62, 63, 65, 67, 70, 71, 70, 73, 81, 84, 78, 79, 85, 87, 
83, 83, 87, 86, 84, 85, 87, 86, 85, 86, 88, 92, 92, 83, 76, 75, 
78, 78, 74, 71, 72, 71, 69, 68, 64, 63, 67, 63, 49, 42, 48, 48, 
43, 37, 30, 26, 29, 27, 22, 20, 20, 18, 11, 6, 5, 5, 1, -6, 
-8, -11, -14, -15, -18, -34, -41, -42, -44, -48, -49, -52, -56, -52, -44, -43, 
-48, -44, -39, -34, -28, -23, -26, -23, -14, -9, -10, -11, -6, -3, -3, -8, 
-15, -15, -12, -10, -6, -3, -9, -23, -19, -7, 4, 7, 6, 13, 24, 28, 
20, 14, 31, 42, 41, 36, 36, 43, 55, 58, 58, 57, 57, 59, 57, 54, 
58, 69, 73, 60, 60, 66, 69, 65, 60, 65, 76, 81, 78, 74, 76, 75, 
74, 73, 71, 72, 86, 86, 76, 74, 82, 90, 86, 80, 80, 83, 86, 80, 
75, 74, 79, 85, 86, 81, 77, 76, 81, 83, 81, 88, 94, 88, 81, 82, 
88, 86, 84, 81, 83, 89, 89, 78, 66, 57, 57, 65, 60, 51, 50, 46, 
32, 25, 33, 34, 33, 37, 42, 43, 43, 44, 45, 45, 50, 61, 52, 41, 
43, 41, 17, 20, 32, 27, 9, 2, -7, -27, -38, -31, -21, -25, -50, -55, 
-49, -52, -67, -68, -61, -62, -59, -51, -56, -77, -73, -61, -54, -57, -64, -57, 
-56, -69, -73, -62, -65, -72, -68, -70, -79, -82, -77, -80, -84, -85, -84, -85, 
-90, -90, -89, -95, -99, -92, -89, -91, -93, -92, -88, -89, -98, -99, -88, -83, 
-82, -75, -79, -89, -84, -72, -79, -80, -70, -65, -63, -58, -65, -73, -66, -55, 
-53, -47, -43, -45, -45, -42, -45, -50, -48, -52, -56, -49, -40, -46, -50, -48, 
-42, -37, -35, -34, -29, -32, -40, -38, -26, -33, -38, -31, -25, -32, -42, -34, 
-28, -28, -29, -30, -33, -30, -19, -17, -25, -25, -12, -3, -1, -3, -4, -1, 
-1, 0, 5, 11, 5, -5, -9, -8, -10, -12, -16, -24, -25, -18, -21, -34, 
-27, -15, -11, -8, -3, -5, 3, 21, 30, 29, 30, 39, 45, 52, 54, 48, 
46, 57, 53, 36, 27, 36, 35, 16, 4, 1, -3, -7, 0, 2, -8, -18, 
-14, 2, 1, -11, -8, 6, 14, 13, 7, -1, 5, 20, 17, -4, 9, 23, 
14, -2, -4, -14, -25, -14, -2, -20, -51, -33, -16, -22, -34, -41, -51, -39, 
-22, -32, -53, -35, -19, -29, -48, -53, -52, -47, -44, -52, -73, -84, -72, -52, 
-65, -87, -96, -86, -69, -83, -100, -96, -79, -75, -91, -96, -91, -80, -74, -81, 
-90, -87, -88, -90, -89, -92, -90, -84, -82, -80, -79, -94, -96, -79, -73, -89, 
-99, -80, -77, -81, -81, -82, -93, -88, -74, -68, -77, -83, -79, -79, -72, -58, 
-63, -82, -60, -41, -58, -72, -54, -34, -38, -34, -33, -36, -26, -15, -28, -32, 
-24, -21, -21, -15, -16, -16, -13, -11, 3, 7, -5, -9, 4, 8, -2, 10, 
22, 22, 26, 34, 31, 34, 41, 40, 40, 54, 52, 49, 57, 62, 58, 64, 
70, 67, 68, 74, 75, 69, 74, 78, 75, 72, 77, 77, 76, 78, 82, 79, 
73, 76, 79, 81, 84, 84, 79, 78, 79, 76, 73, 79, 80, 78, 80, 80, 
73, 73, 83, 87, 83, 82, 84, 81, 77, 77, 77, 73, 71, 76, 80, 78, 
76, 74, 73, 75, 77, 72, 69, 75, 73, 69, 70, 71, 69, 72, 70, 60, 
57, 60, 55, 48, 51, 43, 30, 32, 41, 31, 22, 22, 25, 27, 19, 11, 
12, 19, 21, 19, 18, 15, 17, 21, 14, 4, 15, 20, 10, 5, 5, -5, 
-9, -10, -16, -23, -26, -35, -39, -41, -45, -50, -46, -51, -59, -59, -56, -52, 
-44, -47, -51, -45, -36, -39, -42, -34, -31, -33, -28, -23, -25, -24, -23, -26, 
-25, -20, -24, -24, -20, -21, -30, -36, -35, -35, -34, -34, -40, -40, -36, -36, 
-40, -40, -44, -49, -42, -31, -30, -41, -47, -41, -36, -32, -31, -31, -26, -20, 
-19, -21, -22, -19, -10, -3, -6, -9, 0, 1, 0, 5, 5, -7, -7, 5, 
2, -9, -7, -3, -12, -11, -5, -9, -12, -2, 0, -5, -6, -3, -2, -2, 
1, -1, -4, -5, -1, 4, 2, -2, -3, 6, 20, 17, 10, 11, 17, 19, 
18, 24, 31, 32, 30, 34, 37, 34, 35, 41, 43, 35, 33, 35, 37, 37, 
38, 40, 42, 42, 40, 39, 42, 43, 41, 41, 43, 44, 47, 47, 46, 46, 
46, 46, 41, 43, 47, 43, 39, 46, 52, 46, 48, 56, 51, 44, 49, 43, 
30, 34, 44, 33, 25, 23, 15, 8, 12, 10, 1, -2, -2, -10, -22, -24, 
-27, -30, -27, -24, -31, -34, -30, -24, -25, -29, -39, -47, -48, -40, -35, -42, 
-45, -47, -52, -56, -58, -63, -59, -52, -55, -67, -72, -75, -81, -80, -72, -71, 
-81, -82, -82, -85, -86, -83, -79, -79, -80, -82, -84, -83, -83, -83, -79, -72, 
-68, -71, -71, -69, -71, -76, -77, -69, -67, -64, -62, -66, -76, -75, -71, -70, 
-69, -60, -42, -42, -53, -63, -61, -51, -43, -45, -47, -47, -46, -37, -22, -11, 
-16, -24, -16, -1, -16, -26, -13, 2, -8, -26, -6, 11, -5, -30, -26, -21, 
-25, -26, -26, -32, -23, -6, -1, -8, -18, -19, 6, 16, 10, 14, 41, 51, 
11, -12, 17, 46, 27, 6, 33, 29, -8, -31, -36, -37, -14, 1, -10, -18, 
-1, -10, -26, -29, -16, 14, 54, 26, -13, -9, 11, 2, 0, 27, 27, -1, 
-26, -45, -33, 11, 39, 8, -40, -14, 14, -6, -38, -42, -21, 31, 24, -28, 
-45, -6, -19, -36, 21, 57, -2, -48, 9, -14, -63, -18, 58, 18, -93, -36, 
1, -50, -74, -14, -13, -17, -27, -66, -65, 2, -33, -62, -26, -12, -52, -42, 
-51, -76, -57, -21, -42, -68, -73, -68, -69, -79, -58, -39, -56, -76, -71, -78, 
-85, -71, -65, -64, -46, -47, -87, -108, -101, -91, -81, -71, -76, -79, -73, -70, 
-72, -61, -43, -30, -27, -31, -33, -28, -23, -11, 0, };
