varying vec4 position;
varying vec3 normal;
varying vec3 light_direction;

void main()
{
	vec4 normal = vec4(normal[0], normal[1], normal[2], 0);

	vec4 final = gl_LightModel.ambient;

	for (unsigned i = 0; i < gl_MaxLights; ++i){
		vec4 l = vec4 (light_direction[0], light_direction[1], light_direction[2], 1);
		vec4 e = normalize(-position);
		vec4 r = normalize(2.0 * dot(l,normal) * normal - l);

	    	vec4 ambient = gl_LightSource[i].ambient * gl_FrontMaterial.ambient;
    		vec4 diffuse = gl_LightSource[i].diffuse * gl_FrontMaterial.diffuse * max(dot(normalize(l),normal), 0.0);
    		vec4 specular = gl_LightSource[i].specular * gl_FrontMaterial.specular * pow(max(dot(r, e), 0.0), gl_FrontMaterial.shininess);

		final += ambient + diffuse + specular;



	}
	gl_FragColor = final;
}
