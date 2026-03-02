def Calculation_Value_Function(Value):
    if(-2.4 <= Value <= 5.7):
        Value_Function = Value * Value
    else:
        Value_Function = 4
    print('\u0417\u043d\u0430\u0447\u0435\u043d\u0438\u0435\u0020\u0444\u0443\u043d\u043a\u0446\u0438\u0438\u0020\u0440\u0430\u0432\u043d\u043e')
    print(Value_Function)
    return 0
Value = float(input('\u0412\u0432\u0435\u0434\u0438\u0442\u0435\u0020\u0437\u043d\u0430\u0447\u0435\u043d\u0438\u0435\u0020\u0447\u0438\u0441\u043b\u0430\u002e\n'))
Calculation_Value_Function(Value)