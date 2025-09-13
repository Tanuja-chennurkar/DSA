import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    rows=len(players)
    col=len(players.columns)
    return [rows,col]