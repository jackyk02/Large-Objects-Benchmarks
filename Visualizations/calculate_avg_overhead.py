import re

# Sample data provided by the user
data = """


















LF Centralized with Optimizations
Episode: 1
Time taken: 0.507 seconds
Overhead: 0.007 seconds

Episode: 2
Time taken: 1.021 seconds
Overhead: 0.013 seconds

Episode: 3
Time taken: 1.575 seconds
Overhead: 0.054 seconds

Episode: 4
Time taken: 2.083 seconds
Overhead: 0.009 seconds

Episode: 5
Time taken: 2.592 seconds
Overhead: 0.009 seconds

Episode: 6
Time taken: 3.146 seconds
Overhead: 0.054 seconds

Episode: 7
Time taken: 3.658 seconds
Overhead: 0.012 seconds

Episode: 8
Time taken: 4.169 seconds
Overhead: 0.011 seconds

Episode: 9
Time taken: 4.728 seconds
Overhead: 0.059 seconds

Episode: 10
Time taken: 5.240 seconds
Overhead: 0.013 seconds

Episode: 11
Time taken: 5.752 seconds
Overhead: 0.012 seconds

Episode: 12
Time taken: 6.308 seconds
Overhead: 0.056 seconds

Episode: 13
Time taken: 6.819 seconds
Overhead: 0.011 seconds

Episode: 14
Time taken: 7.331 seconds
Overhead: 0.012 seconds

Episode: 15
Time taken: 7.888 seconds
Overhead: 0.057 seconds

Episode: 16
Time taken: 8.401 seconds
Overhead: 0.012 seconds

Episode: 17
Time taken: 8.910 seconds
Overhead: 0.009 seconds

Episode: 18
Time taken: 9.466 seconds
Overhead: 0.057 seconds

Episode: 19
Time taken: 9.976 seconds
Overhead: 0.010 seconds

Episode: 20
Time taken: 10.488 seconds
Overhead: 0.012 seconds

Episode: 21
Time taken: 11.046 seconds
Overhead: 0.058 seconds

Episode: 22
Time taken: 11.554 seconds
Overhead: 0.009 seconds

Episode: 23
Time taken: 12.068 seconds
Overhead: 0.013 seconds

Episode: 24
Time taken: 12.627 seconds
Overhead: 0.060 seconds

Episode: 25
Time taken: 13.138 seconds
Overhead: 0.011 seconds

Episode: 26
Time taken: 13.647 seconds
Overhead: 0.008 seconds

Episode: 27
Time taken: 14.209 seconds
Overhead: 0.062 seconds

Episode: 28
Time taken: 14.721 seconds
Overhead: 0.012 seconds

Episode: 29
Time taken: 15.231 seconds
Overhead: 0.010 seconds

Episode: 30
Time taken: 15.787 seconds
Overhead: 0.057 seconds

Episode: 31
Time taken: 16.300 seconds
Overhead: 0.013 seconds

Episode: 32
Time taken: 16.812 seconds
Overhead: 0.012 seconds

Episode: 33
Time taken: 17.368 seconds
Overhead: 0.057 seconds

Episode: 34
Time taken: 17.882 seconds
Overhead: 0.013 seconds

Episode: 35
Time taken: 18.393 seconds
Overhead: 0.012 seconds

Episode: 36
Time taken: 18.949 seconds
Overhead: 0.056 seconds

Episode: 37
Time taken: 19.460 seconds
Overhead: 0.011 seconds

Episode: 38
Time taken: 19.970 seconds
Overhead: 0.010 seconds

Episode: 39
Time taken: 20.525 seconds
Overhead: 0.055 seconds

Episode: 40
Time taken: 21.036 seconds
Overhead: 0.010 seconds

Episode: 41
Time taken: 21.544 seconds
Overhead: 0.009 seconds

Episode: 42
Time taken: 22.054 seconds
Overhead: 0.009 seconds

Episode: 43
Time taken: 22.608 seconds
Overhead: 0.054 seconds

Episode: 44
Time taken: 23.120 seconds
Overhead: 0.012 seconds

Episode: 45
Time taken: 23.632 seconds
Overhead: 0.012 seconds

Episode: 46
Time taken: 24.187 seconds
Overhead: 0.056 seconds

Episode: 47
Time taken: 24.698 seconds
Overhead: 0.011 seconds

Episode: 48
Time taken: 25.209 seconds
Overhead: 0.011 seconds

Episode: 49
Time taken: 25.768 seconds
Overhead: 0.059 seconds

Episode: 50
Time taken: 26.277 seconds
Overhead: 0.009 seconds

Episode: 51
Time taken: 26.788 seconds
Overhead: 0.011 seconds

Episode: 52
Time taken: 27.348 seconds
Overhead: 0.060 seconds

Episode: 53
Time taken: 27.859 seconds
Overhead: 0.011 seconds

Episode: 54
Time taken: 28.370 seconds
Overhead: 0.010 seconds

Episode: 55
Time taken: 28.928 seconds
Overhead: 0.058 seconds

Episode: 56
Time taken: 29.436 seconds
Overhead: 0.009 seconds

Episode: 57
Time taken: 29.944 seconds
Overhead: 0.008 seconds

Episode: 58
Time taken: 30.498 seconds
Overhead: 0.053 seconds

Episode: 59
Time taken: 31.007 seconds
Overhead: 0.009 seconds

Episode: 60
Time taken: 31.517 seconds
Overhead: 0.010 seconds

Episode: 61
Time taken: 32.074 seconds
Overhead: 0.057 seconds

Episode: 62
Time taken: 32.585 seconds
Overhead: 0.011 seconds

Episode: 63
Time taken: 33.148 seconds
Overhead: 0.064 seconds

Episode: 64
Time taken: 33.661 seconds
Overhead: 0.012 seconds

Episode: 65
Time taken: 34.170 seconds
Overhead: 0.009 seconds

Episode: 66
Time taken: 34.728 seconds
Overhead: 0.058 seconds

Episode: 67
Time taken: 35.241 seconds
Overhead: 0.013 seconds

Episode: 68
Time taken: 35.751 seconds
Overhead: 0.010 seconds

Episode: 69
Time taken: 36.308 seconds
Overhead: 0.057 seconds

Episode: 70
Time taken: 36.820 seconds
Overhead: 0.012 seconds

Episode: 71
Time taken: 37.330 seconds
Overhead: 0.010 seconds

Episode: 72
Time taken: 37.885 seconds
Overhead: 0.056 seconds

Episode: 73
Time taken: 38.396 seconds
Overhead: 0.010 seconds

Episode: 74
Time taken: 38.906 seconds
Overhead: 0.011 seconds

Episode: 75
Time taken: 39.456 seconds
Overhead: 0.050 seconds

Episode: 76
Time taken: 39.963 seconds
Overhead: 0.008 seconds

Episode: 77
Time taken: 40.473 seconds
Overhead: 0.009 seconds

Episode: 78
Time taken: 41.028 seconds
Overhead: 0.055 seconds

Episode: 79
Time taken: 41.541 seconds
Overhead: 0.013 seconds

Episode: 80
Time taken: 42.052 seconds
Overhead: 0.012 seconds

Episode: 81
Time taken: 42.608 seconds
Overhead: 0.056 seconds

Episode: 82
Time taken: 43.119 seconds
Overhead: 0.011 seconds

Episode: 83
Time taken: 43.630 seconds
Overhead: 0.010 seconds

Episode: 84
Time taken: 44.187 seconds
Overhead: 0.057 seconds

Episode: 85
Time taken: 44.698 seconds
Overhead: 0.011 seconds

Episode: 86
Time taken: 45.208 seconds
Overhead: 0.011 seconds

Episode: 87
Time taken: 45.768 seconds
Overhead: 0.060 seconds

Episode: 88
Time taken: 46.279 seconds
Overhead: 0.010 seconds

Episode: 89
Time taken: 46.787 seconds
Overhead: 0.009 seconds

Episode: 90
Time taken: 47.348 seconds
Overhead: 0.061 seconds

Episode: 91
Time taken: 47.861 seconds
Overhead: 0.013 seconds

Episode: 92
Time taken: 48.371 seconds
Overhead: 0.010 seconds

Episode: 93
Time taken: 48.928 seconds
Overhead: 0.058 seconds

Episode: 94
Time taken: 49.437 seconds
Overhead: 0.009 seconds

Episode: 95
Time taken: 49.947 seconds
Overhead: 0.010 seconds

Episode: 96
Time taken: 50.507 seconds
Overhead: 0.060 seconds

Episode: 97
Time taken: 51.018 seconds
Overhead: 0.011 seconds

Episode: 98
Time taken: 51.527 seconds
Overhead: 0.008 seconds

Episode: 99
Time taken: 52.087 seconds
Overhead: 0.060 seconds

Episode: 100
Time taken: 52.598 seconds
Overhead: 0.011 seconds


"""

# Extract overhead values using regular expressions
overhead_values = re.findall(r"Overhead: ([\d\.-]+) seconds", data)

# Convert the extracted strings to floats
overhead_values = [float(value) for value in overhead_values]

# Calculate the average overhead
average_overhead = sum(overhead_values) / len(overhead_values)
print(average_overhead)
