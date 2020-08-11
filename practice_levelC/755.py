#pythonのほうが良いそうなのでpythonの解答コードを解読する
###################################################
###################################################
#####
# 解説がわからん
#######
n = int(input())

def func(s):
    if int(s) > n:
        return 0
    ret = 1 if all(s.count(c) > 0 for c in '753') else 0 #三項演算子

    """ 
    all = 全要素がTrueならTrueになる。
    s.count() = ()内の文字が何回含まれているか数える

    """

    for c in '753':
        ret += func(s+c)
    return ret

print(func('0'))