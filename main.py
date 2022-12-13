import pickle
import requests
import pandas as pd
import time
from sklearn import preprocessing

index = 0
min = [61.016000, 63.029000, 61.000000, 61.002000, 0.097000, 63.037000, -999.999000, -999.620000, -4.865000]
max = [79.995000, 78.985000, 78.998000, 78.960000, 90.000000, 75.996000, 988.544000, 1.964000, 996.958000]
model = pickle.load(open("./KNN_model.sav", 'rb'))

col = []
for i in range(9):
    col.append(f'feature_{i}')

while(True):
    r = requests.get("https://blynk.cloud/external/api/get?token=Q3_32ilr1DgBNEyhr90ArOVn42wBvgOQ&v2")

    dariBlynk = r.content
    dariBlynk = dariBlynk.decode("utf-8")
    dariBlynk = list(dariBlynk.split(","))
    new = []
    for i in dariBlynk:
        try:
            i = float(i)
            new.append(i)
        except:
            pass

    stream = new[6:]

    feature_frame = pd.DataFrame(data = [min,stream,max], columns=col)

    MinMaxScaler = preprocessing.MinMaxScaler()
    normalized_data = MinMaxScaler.fit_transform(feature_frame)
    data = pd.DataFrame(normalized_data, columns=col)
    data = data.iloc[1].to_frame().transpose()

    result = model.predict(data)
    print(stream)
    PredMap = {'A' :0, 'B' :1, 'C' :2, 'D' :3, 'E':4, 'F':5, 'G':6, 'H':7, 'I':8, 'J':9, 'K':10, 'L':11, 'M':12, 'N':13, 'O':14, 'P':15, 'Q':16, 'R':17, 'S':18, 'T':19, 'U':20, 'V':21, 'W':22, 'X':23, 'Y':24, 'Z':25}
    Key_List=list(PredMap.keys())
    Value_List=list(PredMap.values())
    position = Value_List.index(int(result))
    Mappedresult = Key_List[position]
    print(Mappedresult)

    time.sleep(2)