f = lambda c : 9.0 * c / 5.0 + 32.0
c = lambda f : (f - 32.0) * 5.0 / 9.0

[ print( "{} degc -> {} degf".format( x, f(x))) for x in [-40, 0, 40]]
[ print( "{} degf -> {} degc".format(f, c(f))) for f in [-40, 0, 98.6]]
