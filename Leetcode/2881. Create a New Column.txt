import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees = employees.assign(bonus = employees.salary * 2)
    return employees