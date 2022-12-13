import pandas as pd
from sklearn import preprocessing
import pickle

class predict:
    def __init__(self, path):
        self.min = [61.016000, 63.029000, 61.000000, 61.002000, 0.097000, 63.037000, -999.999000, -999.620000, -4.865000]
        self.max = [79.995000, 78.985000, 78.998000, 78.960000, 90.000000, 75.996000, 988.544000, 1.964000, 996.958000]
        self.model = pickle.load(open(path, 'rb'))

    def create_data(self, val:list):
        value = val

        col = []
        for i in range(len(val)):
            col.append(f'feature_{i}')

        feature_frame = pd.DataFrame(data = [self.min,value, self.max], columns=col)

        MinMaxScaler = preprocessing.MinMaxScaler()
        normalized_data = MinMaxScaler.fit_transform(feature_frame)
        data = pd.DataFrame(normalized_data, columns=col)
        data = data.iloc[1].to_frame().transpose()

        result = self.model.predict(data)

        return result