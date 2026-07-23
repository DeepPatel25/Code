class Solution:
    def secondsBetweenTimes(self, startTime: str, endTime: str) -> int:
        return ((int(endTime[0:2]) - int(startTime[0:2])) * 3600) + ((int(endTime[3:5]) - int(startTime[3:5])) * 60) + (int(endTime[6:]) - int(startTime[6:]))