
---
cssclass: dashboard
---

# ADC

```dataview
TABLE
	rows.file.link AS "NAME",
	rows.type AS "TYPE"
FROM "ADC" AND -#references AND -#index 
SORT file.name ASC
```




# Vault Info

-   ![file_cabinet](https://github.githubassets.com/images/icons/emoji/unicode/1f5c4.png) Recent file updates `$=dv.list(dv.pages('').sort(f=>f.file.mtime.ts,"desc").limit(4).file.link)`
-   ![bookmark](https://github.githubassets.com/images/icons/emoji/unicode/1f516.png) Tagged: favorite `$=dv.list(dv.pages('#favorite').sort(f=>f.file.name,"desc").limit(4).file.link)`
-   ![part_alternation_mark](https://github.githubassets.com/images/icons/emoji/unicode/303d.png) Stats
    -   File Count: `$=dv.pages().length`