import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    concat_result = pd.concat([df1, df2], axis=0)
    return concat_result