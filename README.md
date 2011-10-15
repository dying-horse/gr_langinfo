Allgemeine Hinweise:
* Nutzer, die dieses lua-Modul nur installieren wollen, gehen dabei am
  besten so wie [hier](https://github.com/dying-horse/gr_rocks/#readme)
  beschrieben vor.

Das Modul `gr_langinfo`  muß auf folgende Weise aktiviert werden:
	require "gr_langinfo"

Dann steht das table `langinfo` mit folgenden Funktionen bereit:

	langinfo.codeset()
Im aktuell eingestellten locale verwendeter Zeichensatz.  Diese Information
wird als Zeichenkette bereitgestellt.  Bsp.:
	print(langinfo.codeset())
gibt den aktuell verwendeten Zeichensatz auf dem Bildschirm aus.

Die folgende Funktion übersetzt Wochentags- und Monatsnamen in die vom
aktuell eingestellten locale vorgegebene Sprache:
        langinfo.translate()

Die folgende Funktion liefert die abgekürzte Bezeichnung desselben aus.
        langinfo.abbreviate()

Beide Funktionen liefern Zeichenketten zurück.  Als Argument wird acceptiert:
`Mon`, `Tue`, `Wed`, `Thu`, `Fri`, `Sat`, `Sun`
`Jan`, `Feb`, `Mar`, `Apr`, `May`, `Jun`,
`Jul`, `Aug`, `Sep`, `Oct`, `Nov`, `Dec`.  Bsp.:
        print(langinfo.translate("Feb"))
gibt die Bezeichnung für den Monat Februar in der aktuell eingestellten
Sprache auf den Bildschirm aus.
