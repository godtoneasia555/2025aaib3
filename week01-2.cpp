# week01-2.py leetcode �ǲ߭p�e python ����1 for �j��
# leetCode 28.  Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�����
        N = len(needle) #�r�����
        # sadbustad
        # sad i:0
        # sad i:1
        # ...
        #    sad i:6
        for i in range(H-N+1): #����9 �� ����3 ��0...6
            if haystack[i:i+N] == needle: #�Y��ӬۦP
            #��r��,�qi�}�l,���D i+N���� �@N�Ӧr
                return i#���\����m
            return -1 #�S�����\

