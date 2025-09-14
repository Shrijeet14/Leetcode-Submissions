import pandas as pd

def pivotTable(df: pd.DataFrame) -> pd.DataFrame:
    pivot_df = df.pivot(index='month', columns='city', values='temperature')
    
    return pivot_df
    