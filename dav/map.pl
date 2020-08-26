# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davpinto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 17:23:13 by davpinto          #+#    #+#              #
#    Updated: 2020/08/25 17:32:14 by davpinto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
