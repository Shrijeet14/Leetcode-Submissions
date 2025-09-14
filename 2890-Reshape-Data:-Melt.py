import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
    # Use pd.melt to unpivot the DataFrame
    reshaped_report = pd.melt(
        report,
        id_vars=['product'],           # Column(s) to keep fixed
        value_vars=['quarter_1', 'quarter_2', 'quarter_3', 'quarter_4'],  # Columns to unpivot
        var_name='quarter',             # Name of the new column for the quarter
        value_name='sales'              # Name of the new column for the sales data
    )
    return reshaped_report
