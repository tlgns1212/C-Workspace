// df1 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/50만이상지역별_층수별_건축물_현황_2010~2019.csv")

// df2 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_공장_현황및면적_2015~2021.csv")
// df2 = df2[['지역별(1)','지역별(2)','2014.2/2.1']]
// df2 = df2.rename(columns = {'2014.2/2.1':'공장면적'})
// df2.loc[1] = ['지역별(1)','지역별(2)','2014']

// df2.loc[0, '공장면적'] = "2014"
// for i in range(85,116):
//     if df2.iloc[i][1] == '연천' or df2.iloc[i][1] == '가평' or df2.iloc[i][1] == '양평':
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
// for i in range(117,135):
//     if df2.iloc[i][1] == '고성' or df2.iloc[i][1] == '양구' or df2.iloc[i][1] == '양양' or df2.iloc[i][1] == '영월' or df2.iloc[i][1] == '인제' or df2.iloc[i][1] == '정선' or df2.iloc[i][1] == '철원' or df2.iloc[i][1] == '평창' or df2.iloc[i][1] == '홍천' or df2.iloc[i][1] == '화천' or df2.iloc[i][1] == '횡성':
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
// for i in range(136,163):
//     if df2.iloc[i][1] == '소계':
//         pass
//     elif df2.iloc[i][1] == '제천' or df2.iloc[i][1] == '청주' or df2.iloc[i][1] == '충주' or df2.iloc[i][1] == '계룡' or df2.iloc[i][1] == '공주' or df2.iloc[i][1] == '논산' or df2.iloc[i][1] == '당진' or df2.iloc[i][1] == '보령' or df2.iloc[i][1] == '서산' or df2.iloc[i][1] == '아산' or df2.iloc[i][1] == '천안':
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
// for i in range(164,178):
//     if df2.iloc[i][1] == '고창' or df2.iloc[i][1] == '무주' or df2.iloc[i][1] == '부안' or df2.iloc[i][1] == '순창' or df2.iloc[i][1] == '완주' or df2.iloc[i][1] == '임실' or df2.iloc[i][1] == '장수' or df2.iloc[i][1] == '진안':
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
// for i in range(179,201):
//     if df2.iloc[i][1] == '광양' or df2.iloc[i][1] == '나주' or df2.iloc[i][1] == '목포' or df2.iloc[i][1] == '순천' or df2.iloc[i][1] == '여수':
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
// for i in range(202,225):
//     if df2.iloc[i][1] == '고령' or df2.iloc[i][1] == '군위' or df2.iloc[i][1] == '봉화' or df2.iloc[i][1] == '성주' or df2.iloc[i][1] == '영덕' or df2.iloc[i][1] == '영양' or df2.iloc[i][1] == '예천' or df2.iloc[i][1] == '울릉' or df2.iloc[i][1] == '울진' or df2.iloc[i][1] == '의성' or df2.iloc[i][1] == '청도' or df2.iloc[i][1] == '청송' or df2.iloc[i][1] == '칠곡':
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
// for i in range(226,244):
//     if df2.iloc[i][1] == '거창' or df2.iloc[i][1] == '고성' or df2.iloc[i][1] == '남해' or df2.iloc[i][1] == '산청' or df2.iloc[i][1] == '의령' or df2.iloc[i][1] == '창녕' or df2.iloc[i][1] == '하동' or df2.iloc[i][1] == '함안' or df2.iloc[i][1] == '함양' or df2.iloc[i][1] == '합천':
//         df2.iloc[i][1] = df2.iloc[i][1]+'군'
//     else:
//         df2.iloc[i][1] = df2.iloc[i][1]+'시'
// for i in range(245,247):
//     df2.iloc[i][1] = df2.iloc[i][1]+'시'
// df2 = df2.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df2, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")
// #df2 군 / 시 붙이기
// #for i in range(85, 116):
// #if df111.iloc[i][1] == '연천' or df111.iloc[i][1] == '가평' or df111.iloc[i][1] == '양평':
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #for i in range(117, 135):
// #if df111.iloc[i][1] == '고성' or df111.iloc[i][1] == '양구' or df111.iloc[i][1] == '양양' or df111.iloc[i][1] == '영월' or df111.iloc[i][1] == '인제' or df111.iloc[i][1] == '정선' or df111.iloc[i][1] == '철원' or df111.iloc[i][1] == '평창' or df111.iloc[i][1] == '홍천' or df111.iloc[i][1] == '화천' or df111.iloc[i][1] == '횡성':
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #for i in range(136, 163):
// #if df111.iloc[i][1] == '소계':
// #pass
// #elif df111.iloc[i][1] == '제천' or df111.iloc[i][1] == '청주' or df111.iloc[i][1] == '충주' or df111.iloc[i][1] == '계룡' or df111.iloc[i][1] == '공주' or df111.iloc[i][1] == '논산' or df111.iloc[i][1] == '당진' or df111.iloc[i][1] == '보령' or df111.iloc[i][1] == '서산' or df111.iloc[i][1] == '아산' or df111.iloc[i][1] == '천안':
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #for i in range(164, 178):
// #if df111.iloc[i][1] == '고창' or df111.iloc[i][1] == '무주' or df111.iloc[i][1] == '부안' or df111.iloc[i][1] == '순창' or df111.iloc[i][1] == '완주' or df111.iloc[i][1] == '임실' or df111.iloc[i][1] == '장수' or df111.iloc[i][1] == '진안':
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #for i in range(179, 201):
// #if df111.iloc[i][1] == '광양' or df111.iloc[i][1] == '나주' or df111.iloc[i][1] == '목포' or df111.iloc[i][1] == '순천' or df111.iloc[i][1] == '여수':
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #for i in range(202, 225):
// #if df111.iloc[i][1] == '고령' or df111.iloc[i][1] == '군위' or df111.iloc[i][1] == '봉화' or df111.iloc[i][1] == '성주' or df111.iloc[i][1] == '영덕' or df111.iloc[i][1] == '영양' or df111.iloc[i][1] == '예천' or df111.iloc[i][1] == '울릉' or df111.iloc[i][1] == '울진' or df111.iloc[i][1] == '의성' or df111.iloc[i][1] == '청도' or df111.iloc[i][1] == '청송' or df111.iloc[i][1] == '칠곡':
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #for i in range(226, 244):
// #if df111.iloc[i][1] == '거창' or df111.iloc[i][1] == '고성' or df111.iloc[i][1] == '남해' or df111.iloc[i][1] == '산청' or df111.iloc[i][1] == '의령' or df111.iloc[i][1] == '창녕' or df111.iloc[i][1] == '하동' or df111.iloc[i][1] == '함안' or df111.iloc[i][1] == '함양' or df111.iloc[i][1] == '합천':
// #df111.iloc[i][1] = df111.iloc[i][1] + '군'
// #else:
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'
// #for i in range(245, 247):
// #df111.iloc[i][1] = df111.iloc[i][1] + '시'

// #df4
// df4 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_녹지율_2008~2020.csv")
// df4 = df4.replace('전국', '합계')
// df4 = df4.replace('소재지(시군구)별(1)','지역별(1)')
// df4 = df4[['소재지(시군구)별(1)','2014','2014.1']]
// df4 = df4.drop([0])
// df4 = df4.rename(columns={'소재지(시군구)별(1)':'지역별(1)','2014':'도시지역', '2014.1':'녹지지역'})
// df4.insert(1, "지역별(2)", '소계', allow_duplicates=False)
// df4.loc[1, '도시지역'] = "2014"
// df4.loc[1, '녹지지역'] = "2014"
// df4.loc[1, '지역별(2)'] = "지역별(2)"
// df4 = df4.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df4, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df5
// df5 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_도시지역_인구현황_2005~2020.csv")
// df5 = df5[['소재지(시군구)별','2014 년']]

// #df6 ~df7
// df6 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_면적_크기_2005~2020.csv")
// df7 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_자동차주행거리.csv")

// #df8
// df8 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_하천_면적_2008~2020.csv")
// df8 = df8.replace('소재지(시군구)별(1)', '지역별(1)')
// df8 = df8.replace('소재지(시군구)별(2)','지역별(2)')
// df8 = df8[['소재지(시군구)별(1)','소재지(시군구)별(2)','2014','2014.5']]
// df8 = df8.drop([1])
// df8 = df8.rename(columns={'소재지(시군구)별(1)':'지역별(1)','소재지(시군구)별(2)' : '지역별(2)','2014':'하천면적', '2014.5':'하천면적'})
// df8.loc[2, '지역별(1)'] = "합계"
// df8.loc[0, '하천면적'] = "2014"
// df8 = df8.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df8, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df9
// df9 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시군구별_현재흡연율.csv")
// df9 = df9.replace('시군구별(1)', '지역별(1)')
// df9 = df9.replace('시군구별(2)','지역별(2)')
// df9 = df9[['시군구별(1)','시군구별(2)','2014.1']]
// df9 = df9.rename(columns={'시군구별(1)':'지역별(1)','시군구별(2)' : '지역별(2)','2014.1':'흡연률'})
// df9 = df9.drop_duplicates(['지역별(1)','지역별(2)'])
// df9.loc[0, '흡연률'] = "2014"
// df9 = df9.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df9, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df10
// df10 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시도별_강수량_2000~2021.csv")
// df10 = df10.replace('전국(평균)', '합계')
// df10 = df10[['행정구역별','2014']]
// df10 = df10.rename(columns={'행정구역별':'지역별(1)','2014':'강수량'})
// df10.insert(1, "지역별(2)", '소계', allow_duplicates=False)
// df10.loc[0] = ['지역별(1)','지역별(2)','강수']
// df10.loc[0, '강수량'] = "2014"
// df10 = df10.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df10, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df13
// df13 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시도별_유동인구_2000~2022.csv")
// df13 = df13.replace('전국', '합계')
// df13 = df13[['행정구역(시군구)별','2014.01 월']]
// df13 = df13.rename(columns={'행정구역(시군구)별':'지역별(1)','2014.01 월':'유동인구'})
// df13.insert(1, "지역별(2)", '소계', allow_duplicates=False)
// df13 = df13.drop_duplicates(['지역별(1)'])
// df13.loc[0] = ['지역별(1)','지역별(2)','강수']
// df13.loc[0, '유동인구'] = "2014"
// df13 = df13.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df13, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df15
// df15 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시도별_폐기물_처리시설_매립시설_2000~2019.csv")
// df15 = df15[['시도(1)','2014.2']]
// df15 = df15.drop([1])
// df15 = df15.rename(columns={'시도(1)':'지역별(1)','2014.2':'매립용량'})
// df15.insert(1, "지역별(2)", '소계', allow_duplicates=False)
// df15.loc[0, '지역별(2)'] = "지역별(2)"
// df15.loc[0, '지역별(1)'] = "지역별(1)"
// df15.loc[0, '매립용량'] = "2014"

// df15.loc[2, '지역별(1)'] = "합계"

// df15.loc[3, '지역별(1)'] = "서울특별시"
// df15.loc[4, '지역별(1)'] = "부산광역시"
// df15.loc[5, '지역별(1)'] = "대구광역시"
// df15.loc[6, '지역별(1)'] = "인천광역시"
// df15.loc[7, '지역별(1)'] = "광주광역시"
// df15.loc[8, '지역별(1)'] = "대전광역시"
// df15.loc[9, '지역별(1)'] = "울산광역시"
// df15.loc[10, '지역별(1)'] = "세종특별자치시"
// df15.loc[11, '지역별(1)'] = "경기도"
// df15.loc[12, '지역별(1)'] = "강원도"
// df15.loc[13, '지역별(1)'] = "충청북도"
// df15.loc[14, '지역별(1)'] = "충청남도"
// df15.loc[15, '지역별(1)'] = "전라북도"
// df15.loc[16, '지역별(1)'] = "전라남도"
// df15.loc[17, '지역별(1)'] = "경상북도"
// df15.loc[18, '지역별(1)'] = "경상남도"
// df15.loc[19, '지역별(1)'] = "제주특별자치도"
// df15 = df15.drop_duplicates(['지역별(1)','지역별(2)'])

// df111 = pd.merge(left = df111, right = df15, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// #df111.to_csv("practice.csv", encoding = "utf-8-sig")

// #df16
// df16 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/시도별_폐기물_처리시설_현황_2010~2019.csv")
// df16 = df16[['시도(1)','2014.3']]

// df16 = df16.drop([1])
// df16 = df16.rename(columns={'시도(1)':'지역별(1)','2014.3':'폐기물처리량'})
// df16.insert(1, "지역별(2)", '소계', allow_duplicates=False)
// df16.loc[0, '지역별(2)'] = "지역별(2)"
// df16.loc[0, '지역별(1)'] = "지역별(1)"
// df16.loc[2, '지역별(2)'] = "지역별(2)"
// df16.loc[2, '지역별(1)'] = "지역별(1)"
// df16.loc[0, '폐기물처리량'] = "2014"
// df16.loc[2, '폐기물처리량'] = "2014"

// df16.loc[4, '지역별(1)'] = "서울특별시"
// df16.loc[5, '지역별(1)'] = "부산광역시"
// df16.loc[6, '지역별(1)'] = "대구광역시"
// df16.loc[7, '지역별(1)'] = "인천광역시"
// df16.loc[8, '지역별(1)'] = "광주광역시"
// df16.loc[9, '지역별(1)'] = "대전광역시"
// df16.loc[10, '지역별(1)'] = "울산광역시"
// df16.loc[11, '지역별(1)'] = "세종특별자치시"
// df16.loc[12, '지역별(1)'] = "경기도"
// df16.loc[13, '지역별(1)'] = "강원도"
// df16.loc[14, '지역별(1)'] = "충청북도"
// df16.loc[15, '지역별(1)'] = "충청남도"
// df16.loc[16, '지역별(1)'] = "전라북도"
// df16.loc[17, '지역별(1)'] = "전라남도"
// df16.loc[18, '지역별(1)'] = "경상북도"
// df16.loc[19, '지역별(1)'] = "경상남도"
// df16.loc[20, '지역별(1)'] = "제주특별자치도"
// df16 = df16.drop_duplicates(['지역별(1)','지역별(2)'])
// df111 = pd.merge(left = df111, right = df16, how = "left", on = ["지역별(1)","지역별(2)"], sort = False)
// df111.to_csv("practice.csv",encoding="utf-8-sig")

// #df17
// df17 = pd.read_csv("C:/Users/tlgns/Sihoon's Jupyter/Graduation WorkSpace/ExcelPracticeFolder/csvFiles/지점별_평균기온_2000~2020.csv")
