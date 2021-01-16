const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 3684;
const signed char revSamples[] = {//0
0, -1, -2, -4, -4, -1, 19, 22, -4, -37, -44, -25, 2, 2, -8, -14, //16
-14, -21, -28, -34, -35, -32, -25, -13, -10, -12, -12, -7, -2, -18, -37, -41, //32
-23, 7, 30, 26, 19, 17, 19, 15, 11, 22, 46, 70, 81, 81, 66, 57, //48
57, 69, 86, 97, 89, 84, 93, 107, 107, 85, 82, 96, 108, 103, 87, 83, //64
96, 106, 106, 98, 91, 94, 101, 107, 107, 100, 93, 103, 114, 120, 115, 106, //80
102, 102, 97, 87, 78, 86, 102, 110, 100, 80, 66, 71, 80, 84, 87, 95, //96
105, 107, 101, 96, 99, 107, 115, 115, 113, 112, 116, 122, 123, 112, 98, 90, //112
91, 96, 95, 92, 98, 111, 116, 91, 69, 68, 87, 106, 108, 97, 104, 116, //128
123, 117, 102, 88, 89, 96, 106, 111, 103, 93, 85, 81, 79, 77, 81, 89, //144
93, 93, 88, 84, 82, 81, 85, 92, 98, 96, 87, 77, 71, 69, 74, 82, //160
82, 77, 71, 69, 70, 69, 69, 76, 87, 92, 91, 92, 95, 98, 102, 103, //176
98, 83, 68, 66, 74, 76, 61, 50, 51, 52, 44, 25, 26, 36, 45, 51, //192
56, 61, 58, 60, 75, 94, 94, 76, 66, 75, 94, 104, 93, 83, 81, 80, //208
76, 68, 64, 66, 70, 74, 80, 79, 72, 70, 80, 96, 103, 90, 85, 93, //224
104, 113, 118, 118, 101, 78, 68, 81, 97, 84, 69, 67, 71, 64, 39, 37, //240
43, 42, 33, 29, 37, 38, 30, 24, 25, 19, 9, 4, 8, 14, 17, 14, //256
8, 0, -5, -1, 9, 17, 17, 20, 25, 28, 31, 35, 39, 40, 41, 46, //272
53, 53, 52, 53, 54, 51, 38, 28, 20, 14, 9, 5, 2, 0, -2, -7, //288
-17, -35, -41, -39, -35, -32, -25, -23, -25, -29, -32, -36, -54, -60, -50, -36, //304
-34, -44, -59, -63, -69, -76, -75, -63, -62, -64, -60, -52, -49, -55, -51, -38, //320
-26, -25, -29, -25, -16, -7, 1, 6, 1, -6, -6, -4, -2, -6, -8, 1, //336
12, 13, 3, -9, -11, -6, -3, -5, -9, -8, -5, -6, -7, -5, -1, 2, //352
3, 3, 2, 0, 2, 14, 19, 15, 12, 18, 38, 43, 40, 38, 38, 37, //368
33, 36, 46, 56, 58, 53, 42, 36, 33, 33, 36, 40, 42, 43, 44, 41, //384
33, 19, 16, 19, 24, 24, 20, 17, 22, 25, 19, 10, 1, 1, 0, -1, //400
0, 2, 2, 5, 12, 14, 3, -15, -21, -9, 0, 0, -6, -11, -10, -14, //416
-25, -37, -43, -39, -33, -31, -37, -47, -57, -64, -65, -64, -64, -69, -75, -73, //432
-70, -70, -74, -80, -85, -83, -73, -61, -60, -86, -95, -82, -65, -65, -81, -91, //448
-80, -74, -81, -89, -89, -80, -77, -76, -75, -79, -90, -93, -91, -86, -82, -83, //464
-91, -95, -87, -72, -63, -71, -97, -99, -91, -85, -84, -80, -78, -85, -96, -102, //480
-102, -110, -117, -112, -96, -81, -81, -97, -102, -99, -93, -90, -88, -83, -74, -65, //496
-64, -69, -72, -70, -73, -81, -85, -82, -77, -78, -72, -64, -65, -89, -99, -94, //512
-85, -80, -74, -57, -56, -68, -81, -82, -76, -80, -85, -81, -72, -69, -82, -89, //528
-91, -93, -96, -96, -86, -79, -77, -77, -76, -73, -71, -74, -77, -73, -66, -59, //544
-60, -60, -55, -53, -62, -88, -94, -86, -74, -64, -59, -62, -73, -82, -82, -77, //560
-74, -78, -75, -66, -60, -64, -81, -87, -89, -91, -94, -94, -84, -73, -67, -72, //576
-82, -89, -83, -74, -66, -61, -56, -44, -36, -31, -36, -50, -57, -41, -26, -24, //592
-30, -28, -14, -24, -49, -63, -53, -33, -31, -34, -25, -14, -22, -57, -59, -41, //608
-28, -29, -28, -12, -10, -21, -31, -27, -19, -22, -21, -7, 7, 3, -17, -11, //624
6, 15, 8, -1, 3, 9, 12, 16, 28, 39, 31, 19, 18, 25, 30, 25, //640
26, 38, 50, 49, 40, 39, 46, 45, 32, 24, 34, 61, 65, 56, 48, 45, //656
44, 44, 52, 63, 68, 64, 51, 44, 42, 46, 58, 70, 65, 52, 42, 39, //672
38, 40, 48, 60, 65, 62, 59, 57, 50, 41, 39, 48, 61, 74, 79, 79, //688
73, 61, 43, 40, 45, 57, 70, 74, 56, 49, 56, 68, 70, 60, 56, 67, //704
74, 72, 65, 65, 71, 75, 74, 67, 57, 50, 53, 56, 53, 47, 47, 50, //720
44, 32, 19, 8, 7, 22, 36, 35, 17, 2, 7, 13, 7, -4, -3, 17, //736
21, 10, -8, -21, -23, -1, 18, 25, 21, 17, 21, 23, 17, 15, 22, 32, //752
40, 46, 54, 58, 54, 49, 55, 62, 63, 60, 60, 62, 66, 72, 81, 88, //768
87, 82, 80, 82, 86, 90, 94, 97, 97, 96, 90, 79, 68, 58, 56, 59, //784
66, 74, 79, 77, 75, 70, 59, 47, 60, 82, 95, 94, 92, 98, 98, 87, //800
82, 91, 101, 92, 86, 90, 96, 91, 81, 83, 94, 97, 92, 86, 84, 88, //816
92, 96, 96, 94, 97, 99, 94, 83, 76, 80, 91, 93, 96, 97, 89, 71, //832
53, 57, 67, 77, 84, 92, 85, 67, 51, 45, 50, 64, 72, 76, 75, 68, //848
57, 39, 33, 37, 49, 59, 62, 62, 62, 52, 36, 27, 40, 51, 52, 52, //864
56, 60, 47, 40, 46, 57, 56, 44, 48, 56, 54, 43, 39, 50, 51, 42, //880
36, 40, 31, 12, 4, 13, 31, 36, 19, 13, 14, 11, 1, -9, 4, 21, //896
29, 27, 24, 21, 15, 7, 5, 11, 15, 8, 6, 8, 10, 5, -3, -11, //912
-13, -10, -3, 3, -12, -24, -19, 2, 18, 14, -5, -5, 3, 9, 11, 13, //928
10, 7, 12, 21, 23, 1, -5, 4, 15, 13, 4, 4, 9, 4, -5, -7, //944
-1, 1, -3, -3, -2, -8, -30, -34, -25, -10, -3, -4, -12, -20, -31, -44, //960
-49, -41, -23, -17, -15, -13, -14, -35, -57, -67, -61, -50, -42, -29, -25, -36, //976
-56, -70, -70, -67, -75, -75, -60, -42, -43, -55, -61, -63, -69, -73, -61, -51, //992
-49, -52, -51, -49, -67, -84, -87, -78, -70, -70, -70, -67, -67, -74, -81, -84, //1008
-85, -83, -72, -55, -45, -49, -55, -54, -46, -39, -41, -42, -36, -24, -15, -14, //1024
-16, -14, -16, -22, -26, -11, 4, 8, 3, -3, -8, -19, -23, -17, -8, -5, //1040
-12, -19, -15, -13, -20, -29, -31, -26, -26, -33, -42, -46, -48, -50, -53, -52, //1056
-51, -52, -60, -59, -56, -58, -64, -62, -46, -34, -38, -48, -51, -36, -33, -39, //1072
-38, -27, -16, -23, -35, -40, -33, -22, -21, -33, -46, -45, -32, -26, -52, -69, //1088
-66, -52, -45, -49, -53, -55, -67, -85, -90, -73, -65, -68, -73, -76, -85, -106, //1104
-113, -109, -103, -99, -97, -100, -110, -118, -118, -109, -108, -120, -124, -112, -98, -96, //1120
-109, -112, -110, -109, -112, -117, -111, -98, -86, -87, -103, -119, -109, -94, -90, -99, //1136
-103, -95, -96, -108, -116, -111, -100, -95, -97, -95, -88, -86, -97, -101, -91, -77, //1152
-73, -80, -85, -69, -54, -59, -79, -91, -73, -63, -71, -82, -78, -59, -65, -81, //1168
-86, -77, -69, -79, -85, -77, -65, -61, -59, -51, -47, -57, -74, -80, -63, -46, //1184
-38, -36, -37, -41, -51, -51, -48, -46, -46, -36, -17, 0, -1, -21, -41, -46, //1200
-33, -18, -9, -6, -10, -19, -21, -21, -22, -25, -27, -23, -17, -10, -5, -10, //1216
-32, -38, -28, -10, -2, -3, 1, 6, -4, -27, -38, -11, 7, 2, -15, -21, //1232
-12, -9, -22, -27, -19, -12, -12, -4, 11, 14, -3, -17, -2, 11, 5, -7, //1248
-5, 7, 5, -9, -9, 3, 4, -12, -30, -20, -7, -9, -16, -10, -4, -11, //1264
-23, -22, -7, -1, -13, -20, -9, 8, 17, 11, 7, 5, -1, -10, -16, -8, //1280
4, 15, 21, 19, 5, -3, -1, 11, 23, 28, 37, 51, 64, 66, 59, 60, //1296
69, 71, 67, 68, 79, 88, 77, 66, 69, 79, 78, 58, 56, 65, 75, 77, //1312
79, 85, 87, 81, 74, 74, 89, 99, 108, 113, 111, 97, 91, 89, 90, 94, //1328
104, 111, 96, 74, 65, 73, 82, 74, 70, 80, 96, 100, 82, 74, 73, 71, //1344
70, 75, 91, 90, 81, 71, 62, 48, 24, 23, 33, 40, 34, 16, 6, -6, //1360
-20, -27, -20, -2, 2, -1, -6, -13, -22, -36, -35, -27, -16, -5, 0, -9, //1376
-25, -36, -39, -37, -31, -25, -23, -24, -26, -22, -20, -29, -36, -34, -24, -9, //1392
-2, 4, 2, -9, -20, -9, 4, 4, -5, -4, 5, 13, 9, 10, 16, 15, //1408
9, 11, 16, 14, 13, 21, 33, 24, 11, 12, 26, 33, 27, 30, 40, 43, //1424
36, 31, 31, 28, 29, 43, 60, 61, 52, 53, 58, 55, 50, 64, 79, 81, //1440
75, 76, 81, 71, 63, 69, 83, 82, 60, 61, 76, 86, 84, 80, 71, 60, //1456
55, 65, 76, 65, 56, 68, 88, 91, 75, 61, 70, 72, 66, 61, 68, 72, //1472
74, 79, 81, 72, 43, 36, 44, 51, 52, 49, 52, 60, 68, 68, 57, 38, //1488
38, 49, 58, 61, 63, 69, 67, 60, 54, 53, 53, 59, 65, 65, 56, 48, //1504
59, 69, 63, 48, 42, 46, 44, 37, 40, 50, 53, 46, 42, 46, 39, 23, //1520
14, 21, 22, 18, 17, 21, 24, 19, 18, 14, 3, -5, 4, 28, 18, -3, //1536
-8, 12, 31, 17, 5, 14, 30, 34, 15, 10, 19, 31, 38, 39, 43, 46, //1552
43, 32, 25, 36, 48, 52, 47, 41, 41, 40, 38, 38, 41, 43, 43, 49, //1568
53, 52, 51, 58, 72, 68, 60, 58, 64, 67, 62, 65, 74, 72, 58, 45, //1584
45, 44, 39, 36, 39, 39, 29, 20, 19, 22, 22, 22, 23, 25, 28, 33, //1600
39, 30, 16, 8, 12, 25, 41, 43, 36, 20, 1, -8, 3, 15, 17, 10, //1616
7, 21, 27, 17, -3, -12, 1, 29, 27, 15, 9, 12, 11, -4, -6, 0, //1632
7, 9, 9, 0, -22, -43, -46, -32, -27, -40, -50, -45, -38, -47, -78, -91, //1648
-90, -80, -64, -45, -53, -74, -92, -99, -99, -98, -92, -83, -76, -79, -86, -91, //1664
-91, -92, -89, -85, -94, -106, -108, -96, -82, -77, -79, -79, -81, -96, -113, -112, //1680
-73, -50, -48, -62, -75, -84, -88, -93, -95, -90, -77, -52, -50, -68, -94, -108, //1696
-102, -85, -86, -87, -78, -66, -70, -87, -99, -98, -88, -73, -53, -51, -60, -69, //1712
-67, -58, -57, -60, -54, -45, -47, -70, -76, -68, -59, -57, -60, -66, -76, -85, //1728
-87, -79, -70, -68, -64, -57, -60, -76, -96, -93, -82, -74, -72, -71, -64, -64, //1744
-75, -96, -112, -113, -97, -92, -96, -100, -98, -99, -106, -110, -111, -114, -118, -104, //1760
-84, -73, -81, -95, -97, -89, -86, -89, -90, -87, -73, -55, -41, -43, -61, -73, //1776
-59, -46, -51, -64, -62, -37, -25, -27, -36, -47, -58, -67, -61, -51, -44, -42, //1792
-43, -47, -56, -66, -73, -72, -55, -43, -38, -45, -58, -68, -68, -63, -61, -59, //1808
-58, -58, -58, -62, -75, -88, -88, -63, -50, -56, -71, -79, -78, -78, -79, -72, //1824
-60, -54, -55, -50, -42, -38, -41, -40, -29, -22, -16, -3, 10, 12, -5, -7, //1840
5, 17, 20, 19, 30, 38, 36, 28, 25, 28, 26, 27, 40, 58, 66, 51, //1856
44, 51, 68, 78, 73, 60, 66, 78, 84, 80, 71, 71, 69, 63, 57, 57, //1872
61, 59, 60, 69, 75, 69, 50, 53, 64, 70, 68, 73, 84, 84, 73, 63, //1888
66, 80, 84, 86, 83, 75, 64, 67, 78, 82, 77, 75, 84, 82, 69, 61, //1904
68, 80, 84, 81, 85, 92, 98, 96, 88, 75, 67, 74, 88, 88, 76, 75, //1920
83, 82, 65, 48, 57, 66, 59, 44, 38, 41, 39, 37, 37, 37, 24, 16, //1936
18, 24, 30, 36, 45, 44, 39, 31, 24, 14, 17, 31, 45, 46, 38, 34, //1952
33, 24, 9, 3, 13, 38, 50, 55, 48, 28, 7, 18, 36, 41, 38, 46, //1968
70, 63, 38, 21, 23, 29, 31, 38, 47, 43, 25, 11, 16, 15, 7, 6, //1984
17, 22, 8, -3, 1, 11, 16, 16, 14, 5, -10, -22, -10, 12, 28, 28, //2000
14, -4, -19, -17, -14, -11, -6, 4, 14, 10, 3, -3, -6, -12, -10, -4, //2016
3, 9, 15, 16, 3, -17, -29, -24, -13, -5, -6, -8, -12, -16, -13, -11, //2032
-15, -18, -9, 4, -1, -15, -14, 0, 7, 1, -3, 9, 14, 4, -11, -10, //2048
3, 13, 15, 13, 9, 1, 0, -1, -4, -2, 16, 31, 35, 29, 20, 15, //2064
18, 27, 39, 43, 40, 35, 36, 34, 32, 34, 44, 50, 42, 38, 43, 43, //2080
35, 33, 45, 51, 41, 32, 39, 54, 42, 29, 35, 53, 53, 37, 34, 46, //2096
55, 50, 34, 32, 36, 44, 56, 65, 54, 38, 36, 47, 59, 61, 59, 63, //2112
64, 56, 47, 46, 49, 48, 47, 47, 46, 35, 30, 33, 40, 43, 39, 39, //2128
38, 34, 27, 29, 48, 56, 52, 47, 48, 50, 41, 36, 39, 45, 48, 46, //2144
47, 43, 32, 21, 17, 24, 22, 17, 22, 35, 44, 34, 22, 17, 17, 17, //2160
22, 31, 39, 37, 26, 14, 13, 21, 28, 32, 37, 43, 38, 23, 15, 23, //2176
41, 53, 48, 41, 35, 28, 22, 23, 24, 21, 17, 19, 22, 11, -2, -11, //2192
-17, -23, -18, -2, 9, 0, -18, -21, -3, 1, -4, -2, 9, 13, 7, 12, //2208
24, 24, 8, 1, 22, 38, 31, 14, 10, 24, 20, 10, 9, 21, 34, 29, //2224
25, 28, 33, 30, 28, 39, 52, 52, 38, 29, 40, 44, 32, 17, 15, 28, //2240
20, 2, -11, -12, -8, -4, 1, 4, -5, -22, -34, -29, -17, -6, 6, 16, //2256
8, -8, -17, -13, -5, -1, 1, 4, 8, 11, 11, 10, -5, -16, -16, -8, //2272
0, 2, 8, 18, 22, 10, -8, -13, -2, 3, -5, -14, -15, -8, -13, -27, //2288
-38, -40, -42, -51, -59, -60, -56, -56, -58, -54, -50, -54, -66, -79, -82, -73, //2304
-61, -52, -48, -58, -62, -59, -59, -68, -82, -81, -65, -51, -49, -54, -60, -67, //2320
-75, -83, -83, -74, -60, -57, -64, -75, -83, -87, -85, -80, -79, -85, -96, -103, //2336
-100, -97, -101, -108, -110, -110, -116, -121, -119, -113, -111, -117, -113, -101, -91, -87, //2352
-94, -98, -98, -91, -78, -70, -71, -73, -69, -65, -68, -72, -72, -67, -64, -61, //2368
-57, -62, -70, -70, -60, -51, -51, -59, -59, -61, -65, -64, -52, -38, -46, -58, //2384
-61, -59, -67, -75, -75, -65, -55, -52, -59, -67, -70, -72, -75, -81, -74, -55, //2400
-42, -44, -56, -64, -64, -70, -79, -78, -67, -64, -74, -77, -73, -74, -86, -99, //2416
-95, -88, -85, -85, -78, -75, -78, -82, -86, -87, -86, -80, -77, -77, -77, -69, //2432
-60, -64, -74, -82, -82, -80, -75, -69, -65, -67, -70, -70, -73, -83, -92, -93, //2448
-87, -75, -68, -65, -74, -91, -102, -96, -93, -95, -90, -72, -55, -70, -91, -99, //2464
-91, -80, -67, -61, -56, -55, -53, -46, -41, -40, -43, -44, -41, -30, -20, -14, //2480
-14, -15, -11, -5, -3, 0, 8, 13, 9, 11, 22, 31, 26, 15, 20, 32, //2496
33, 27, 27, 44, 50, 49, 51, 57, 58, 41, 31, 35, 52, 69, 76, 61, //2512
49, 48, 57, 64, 58, 55, 62, 71, 74, 70, 67, 65, 64, 70, 83, 94, //2528
94, 88, 88, 94, 101, 104, 105, 106, 105, 103, 99, 95, 102, 112, 116, 112, //2544
104, 93, 90, 89, 94, 105, 107, 90, 77, 79, 89, 91, 74, 74, 83, 89, //2560
83, 74, 68, 70, 73, 76, 81, 83, 81, 81, 79, 73, 68, 77, 93, 105, //2576
104, 95, 85, 86, 89, 87, 85, 92, 112, 115, 102, 85, 78, 81, 77, 72, //2592
79, 96, 106, 101, 79, 69, 66, 65, 66, 74, 79, 79, 75, 70, 64, 59, //2608
58, 57, 58, 62, 66, 67, 62, 58, 56, 54, 53, 57, 63, 64, 58, 57, //2624
70, 77, 77, 72, 69, 69, 72, 78, 85, 85, 83, 88, 94, 91, 79, 71, //2640
74, 86, 88, 86, 83, 75, 60, 57, 61, 65, 57, 43, 31, 32, 36, 33, //2656
25, 14, 6, 9, 16, 23, 24, 13, 3, 3, 16, 31, 31, 10, 2, 8, //2672
20, 25, 26, 31, 33, 29, 23, 17, 18, 26, 39, 52, 53, 43, 36, 40, //2688
44, 43, 40, 44, 56, 58, 56, 51, 43, 26, 22, 28, 36, 35, 28, 16, //2704
10, 3, -3, -4, 0, 7, 7, 0, -9, -16, -16, -9, 0, 5, 6, 0, //2720
-12, -16, -15, -13, -10, -6, -1, -1, -3, -5, -5, -8, -11, -15, -15, -12, //2736
-5, 3, -3, -12, -11, 2, 12, -1, -11, -8, 0, -1, -12, -7, 2, -1, //2752
-13, -20, -15, -16, -22, -16, -2, 0, -23, -31, -22, -13, -19, -31, -24, -15, //2768
-15, -21, -24, -18, -18, -20, -18, -13, -12, -19, -23, -22, -21, -18, -9, 4, //2784
17, 20, 9, -6, -13, -6, 4, 11, 15, 14, 8, 3, 3, 1, -8, -17, //2800
-7, 7, 6, -8, -18, -15, -16, -25, -30, -31, -41, -47, -39, -21, -15, -32, //2816
-54, -47, -38, -43, -54, -53, -32, -25, -29, -37, -45, -56, -51, -39, -33, -40, //2832
-45, -32, -23, -31, -50, -63, -60, -42, -30, -23, -24, -37, -63, -66, -60, -55, //2848
-54, -51, -42, -43, -53, -64, -67, -63, -65, -72, -71, -62, -53, -55, -62, -66, //2864
-68, -73, -78, -68, -55, -50, -56, -62, -60, -61, -71, -78, -70, -51, -37, -39, //2880
-40, -36, -34, -40, -53, -50, -40, -32, -30, -31, -30, -26, -26, -33, -44, -48, //2896
-40, -29, -22, -21, -27, -47, -57, -55, -44, -39, -43, -47, -38, -30, -34, -46, //2912
-59, -59, -62, -66, -64, -51, -34, -37, -47, -56, -63, -68, -58, -37, -20, -17, //2928
-28, -45, -50, -52, -51, -49, -47, -54, -55, -51, -48, -54, -71, -71, -68, -76, //2944
-91, -97, -72, -61, -71, -88, -94, -89, -95, -106, -102, -82, -65, -71, -87, -100, //2960
-108, -113, -113, -103, -93, -89, -89, -92, -98, -114, -120, -117, -108, -100, -87, -74, //2976
-70, -84, -108, -118, -95, -86, -98, -110, -102, -79, -66, -78, -88, -89, -92, -100, //2992
-90, -73, -67, -74, -69, -39, -46, -84, -113, -101, -66, -60, -83, -85, -62, -45, //3008
-69, -89, -91, -81, -70, -60, -45, -43, -46, -40, -23, -12, -37, -61, -66, -45, //3024
-16, 2, -10, -32, -49, -51, -41, -25, -23, -24, -26, -27, -29, -36, -35, -24, //3040
-7, 2, -22, -49, -58, -46, -30, -23, -26, -26, -29, -39, -53, -61, -56, -44, //3056
-27, -13, -14, -44, -57, -50, -36, -27, -23, -14, -12, -20, -37, -50, -53, -43, //3072
-33, -31, -39, -50, -55, -50, -49, -51, -51, -46, -40, -36, -26, -16, -20, -41, //3088
-40, -30, -28, -34, -32, -9, -9, -28, -44, -39, -24, -34, -52, -55, -41, -25, //3104
-25, -35, -44, -49, -44, -28, -5, -3, -10, -13, -8, 4, 21, 24, 17, 11, //3120
14, 26, 30, 33, 40, 47, 42, 20, 15, 25, 40, 49, 47, 29, 17, 19, //3136
36, 57, 61, 50, 44, 45, 47, 47, 56, 62, 59, 48, 44, 50, 55, 49, //3152
44, 47, 53, 57, 57, 58, 57, 55, 54, 57, 62, 69, 77, 82, 80, 77, //3168
77, 76, 74, 78, 90, 86, 71, 63, 74, 91, 88, 72, 62, 65, 76, 87, //3184
98, 93, 81, 76, 85, 98, 89, 76, 74, 81, 84, 73, 66, 66, 64, 55, //3200
44, 32, 31, 35, 38, 35, 24, 23, 30, 35, 30, 19, 15, 18, 21, 29, //3216
42, 50, 33, 17, 15, 25, 33, 32, 37, 46, 47, 30, 8, 5, 19, 26, //3232
18, 3, 1, 12, 21, 18, 2, -13, -14, -6, 1, 3, 3, 4, 3, -5, //3248
-13, -14, -6, 4, 3, 2, 3, 5, 4, -4, -9, -14, -11, 2, 21, 35, //3264
25, 10, 7, 16, 32, 33, 35, 44, 58, 66, 65, 61, 59, 56, 51, 51, //3280
73, 95, 105, 97, 81, 68, 65, 64, 67, 80, 94, 93, 79, 72, 74, 76, //3296
75, 73, 75, 77, 76, 78, 81, 73, 60, 58, 69, 76, 66, 61, 68, 74, //3312
71, 63, 71, 81, 80, 71, 63, 67, 71, 74, 79, 88, 95, 87, 77, 73, //3328
80, 91, 97, 96, 95, 94, 90, 85, 82, 88, 96, 96, 89, 81, 80, 89, //3344
98, 96, 82, 68, 71, 84, 84, 68, 49, 47, 53, 53, 46, 40, 35, 26, //3360
25, 29, 28, 18, 11, 26, 39, 35, 21, 14, 33, 49, 52, 44, 34, 32, //3376
41, 46, 42, 36, 37, 54, 58, 51, 38, 27, 20, 26, 46, 65, 70, 59, //3392
46, 34, 25, 21, 36, 67, 84, 66, 48, 47, 51, 41, 31, 48, 75, 89, //3408
82, 68, 54, 53, 57, 63, 66, 66, 73, 87, 92, 79, 56, 43, 58, 78, //3424
88, 82, 65, 47, 51, 58, 55, 43, 46, 69, 86, 77, 47, 26, 40, 60, //3440
65, 54, 39, 31, 32, 31, 29, 30, 32, 31, 23, 9, -7, -16, -4, 35, //3456
46, 34, 11, -5, -11, -14, -8, 10, 28, 30, 8, -1, -7, -18, -27, -17, //3472
17, 16, -7, -30, -37, -36, -41, -42, -34, -28, -33, -39, -40, -51, -70, -83, //3488
-75, -45, -39, -45, -54, -63, -75, -90, -92, -86, -70, -52, -47, -67, -95, -110, //3504
-106, -90, -75, -76, -82, -92, -98, -95, -91, -96, -101, -96, -86, -78, -83, -93, //3520
-102, -104, -95, -78, -79, -89, -93, -86, -85, -98, -107, -98, -81, -76, -89, -97, //3536
-99, -99, -95, -87, -75, -73, -73, -77, -86, -94, -81, -61, -49, -53, -64, -82, //3552
-96, -104, -95, -71, -54, -61, -75, -88, -100, -113, -106, -82, -60, -55, -66, -81, //3568
-90, -86, -76, -68, -65, -63, -57, -58, -68, -78, -73, -55, -56, -65, -72, -73, //3584
-73, -70, -61, -51, -48, -50, -50, -61, -76, -83, -65, -38, -32, -46, -52, -50, //3600
-57, -77, -96, -86, -74, -68, -67, -69, -80, -96, -110, -116, -115, -109, -102, -97, //3616
-97, -103, -112, -121, -124, -125, -124, -122, -121, -124, -125, -127, -127, -125, -124, -127, //3632
-124, -114, -106, -106, -120, -122, -121, -121, -123, -121, -108, -104, -103, -103, -103, -114, //3648
-121, -117, -110, -113, -124, -118, -96, -82, -90, -106, -116, -119, -117, -106, -86, -72, //3664
-80, -93, -100, -102, -106, -108, -86, -63, -51, -52, -55, -46, -35, -24, -17, -13, //3680
-10, -6, -3, 0, };