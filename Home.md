---
cssclass: dashboard
banner: "![[banner.png]]"
banner_y: 0.49599
---

# ADC ✅

```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "ADC/sections"
```


# ASD ✅


```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "ASD/sections"
```


# SETI

## SETI OS
```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "SETI/sections OS"
```

## SETI RETI


```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "SETI/sections Reti"
```

 
# ALAN

## ALGEBRA LINEARE

```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "ALAN/section Algebra Lineare"
```


## ANALISI NUMERICA


```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY
FROM "ALAN/section Analisi Numerica"
```




# INCOMPLETE NOTES

```dataview
TABLE tags as TAGS, difficulty as DIFFICULTY, status AS STATUS
WHERE status = "INCOMPLETE" AND file.name != "template"
```
