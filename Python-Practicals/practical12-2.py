import pandas as pd
s = pd.Series(data = [1,2,3,4,5,6,7,8,9,5,3])
print("Original Data Series:")
print(s)
print("Mean of Data Series:")
print(s.mean())
print("Standard deviation of Data Series:")
print(s.std())
print("Median of Data Series: ")
print(s.median())
print("Mode of Data Series: ")
print(s.mode())