import re

from speechGoogleAPI import main


def test_main(resource, capsys):
    main(resource('audio.raw'))
    out, err = capsys.readouterr()

    assert re.search(r'how old is the Brooklyn Bridge', out, re.DOTALL | re.I)
