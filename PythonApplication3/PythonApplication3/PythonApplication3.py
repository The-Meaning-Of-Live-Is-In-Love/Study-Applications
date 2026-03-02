def Calculation_Body_Mass_Index(Weight, Height):
    Body_Mass_Index = Weight / (Height * Height)
    print('\u0418\u043d\u0434\u0435\u043a\u0441\u0020\u043c\u0430\u0441\u0441\u044b\u0020\u0442\u0435\u043b\u0430\u0020\u0440\u0430\u0432\u0435\u043d\u002e')
    print(Body_Mass_Index)
    return 0
Weight = int(input('\u0412\u0432\u0435\u0434\u0438\u0442\u0435\u0020\u043c\u0430\u0441\u0441\u0443\u002e\n'))
Height = int(input('\u0412\u0432\u0435\u0434\u0438\u0442\u0435\u0020\u0440\u043e\u0441\u0442\u002e\n'))
Calculation_Body_Mass_Index(Weight, Height)