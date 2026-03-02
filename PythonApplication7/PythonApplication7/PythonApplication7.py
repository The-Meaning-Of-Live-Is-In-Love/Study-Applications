def Cost_Of_Call(City, Call_Duration):
    if(City == 343):
        Cost_Of_Call_1 = 15
        return 0
    elif(City == 381):
        Cost_Of_Call_1 = 18
    elif(City = 473):
        Cost_Of_Call_1 = 13
    else:
        Cost_Of_Call_1 = 11
    Cost_Of_Call = Cost_Of_Call_1 * Call_Duration
    print('\u0421\u0442\u043e\u0438\u043c\u043e\u0441\u0442\u044c\u0020\u0440\u0430\u0437\u0433\u043e\u0432\u043e\u0440\u0430\u0020\u0440\u0430\u0432\u043d\u0430\u002e')
    print(Cost_Of_Call)
    return 0
City = int(input('\u0412\u0432\u0435\u0434\u0438\u0442\u0435\u0020\u043a\u043e\u0434\u0020\u0433\u043e\u0440\u043e\u0434\u0430\u002e\n'))
Call_Duration = int(input('\u0412\u0432\u0435\u0434\u0438\u0442\u0435\u0020\u0434\u043b\u0438\u0442\u0435\u043b\u044c\u043d\u043e\u0441\u0442\u044c\u0020\u0440\u0430\u0437\u0433\u043e\u0432\u043e\u0440\u0430\u002e\n'))